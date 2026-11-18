#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MHKJLCGGJMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MHKJLCGGJMK_BOLLDGCJNLA_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define MHKJLCGGJMK_DEDAMDONGAI_OFFSET UNITYSDK_OFFSET(0x757760)
#define MHKJLCGGJMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHKJLCGGJMK_HHEBACCLCDI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MHKJLCGGJMK_ILCDEDNHCHK_OFFSET UNITYSDK_OFFSET(0x762D20)
#define MHKJLCGGJMK_IPHDEOGKOBI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MHKJLCGGJMK_KGJCCBAFNMD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MHKJLCGGJMK_LEOBIMLEJID_OFFSET UNITYSDK_OFFSET(0x757290)
#define MHKJLCGGJMK_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MHKJLCGGJMK_NNODKOIBKBG_OFFSET UNITYSDK_OFFSET(0x7D5F20)
#define MHKJLCGGJMK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B316F60)
#define MHKJLCGGJMK_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MHKJLCGGJMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MHKJLCGGJMK_TypeDefinitionIndex = 13126;

struct alignas(4) MHKJLCGGJMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHKJLCGGJMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::String* DEDAMDONGAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_DEDAMDONGAI_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Boolean BOLLDGCJNLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_BOLLDGCJNLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ILCDEDNHCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_ILCDEDNHCHK_OFFSET))(this);
	}

	::System::Boolean NNODKOIBKBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_NNODKOIBKBG_OFFSET))(this);
	}

	::System::String* LEOBIMLEJID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_LEOBIMLEJID_OFFSET))(this);
	}

	::System::String* HHEBACCLCDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_HHEBACCLCDI_OFFSET))(this);
	}

	/*
	static ::MHKJLCGGJMK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MHKJLCGGJMK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IPHDEOGKOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_IPHDEOGKOBI_OFFSET))(this);
	}

	/*
	::MHKJLCGGJMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHKJLCGGJMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KGJCCBAFNMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJLCGGJMK_KGJCCBAFNMD_OFFSET))(this);
	}
};
