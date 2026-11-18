#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JLHKOGGGJEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JLHKOGGGJEH_BOLLDGCJNLA_OFFSET UNITYSDK_OFFSET(0x756570)
#define JLHKOGGGJEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLHKOGGGJEH_GNOAJAJFKEN_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JLHKOGGGJEH_HHEBACCLCDI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JLHKOGGGJEH_ILCDEDNHCHK_OFFSET UNITYSDK_OFFSET(0x756220)
#define JLHKOGGGJEH_IPHDEOGKOBI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JLHKOGGGJEH_KGJCCBAFNMD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JLHKOGGGJEH_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JLHKOGGGJEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4FBA40)
#define JLHKOGGGJEH_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JLHKOGGGJEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JLHKOGGGJEH_TypeDefinitionIndex = 11020;

struct alignas(4) JLHKOGGGJEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLHKOGGGJEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Boolean BOLLDGCJNLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_BOLLDGCJNLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GNOAJAJFKEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_GNOAJAJFKEN_OFFSET))(this);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_ODLPELGEBAJ_OFFSET))(this);
	}

	/*
	::JLHKOGGGJEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLHKOGGGJEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KGJCCBAFNMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_KGJCCBAFNMD_OFFSET))(this);
	}

	::System::Int32 ILCDEDNHCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_ILCDEDNHCHK_OFFSET))(this);
	}

	/*
	static ::JLHKOGGGJEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JLHKOGGGJEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IPHDEOGKOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_IPHDEOGKOBI_OFFSET))(this);
	}

	::System::String* HHEBACCLCDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKOGGGJEH_HHEBACCLCDI_OFFSET))(this);
	}
};
