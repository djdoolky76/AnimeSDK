#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OBCOOLNCLPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBCOOLNCLPF_BOLLDGCJNLA_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define OBCOOLNCLPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBCOOLNCLPF_HHEBACCLCDI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OBCOOLNCLPF_ILCDEDNHCHK_OFFSET UNITYSDK_OFFSET(0x755440)
#define OBCOOLNCLPF_IPHDEOGKOBI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBCOOLNCLPF_KGJCCBAFNMD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OBCOOLNCLPF_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OBCOOLNCLPF_MMCKMJGOMOH_OFFSET UNITYSDK_OFFSET(0x755320)
#define OBCOOLNCLPF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17361340)
#define OBCOOLNCLPF_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OBCOOLNCLPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBCOOLNCLPF_TypeDefinitionIndex = 15472;

struct alignas(4) OBCOOLNCLPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBCOOLNCLPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 ILCDEDNHCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_ILCDEDNHCHK_OFFSET))(this);
	}

	::System::Int32 MMCKMJGOMOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_MMCKMJGOMOH_OFFSET))(this);
	}

	::System::String* HHEBACCLCDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_HHEBACCLCDI_OFFSET))(this);
	}

	::System::Boolean BOLLDGCJNLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_BOLLDGCJNLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::Int32 IPHDEOGKOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_IPHDEOGKOBI_OFFSET))(this);
	}

	/*
	static ::OBCOOLNCLPF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBCOOLNCLPF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OBCOOLNCLPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBCOOLNCLPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KGJCCBAFNMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCOOLNCLPF_KGJCCBAFNMD_OFFSET))(this);
	}
};
