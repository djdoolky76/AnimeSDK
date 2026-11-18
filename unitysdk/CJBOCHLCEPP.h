#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CJBOCHLCEPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJBOCHLCEPP_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CJBOCHLCEPP_BLHFPGNMNIA_OFFSET UNITYSDK_OFFSET(0x763920)
#define CJBOCHLCEPP_CEGKGHDLEKB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define CJBOCHLCEPP_EIIFDKCLLAF_OFFSET UNITYSDK_OFFSET(0x766790)
#define CJBOCHLCEPP_FPKLHKBFPJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CJBOCHLCEPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJBOCHLCEPP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CJBOCHLCEPP_HNJDAOAAAFC_OFFSET UNITYSDK_OFFSET(0x755890)
#define CJBOCHLCEPP_IHGEKKCHLPM_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define CJBOCHLCEPP_KCFAKAKEHMG_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define CJBOCHLCEPP_KNFPJIJFAOL_OFFSET UNITYSDK_OFFSET(0x757330)
#define CJBOCHLCEPP_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CJBOCHLCEPP_MCPNCKMABKG_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define CJBOCHLCEPP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A888A0)
#define CJBOCHLCEPP_PEKJBMNEHNN_OFFSET UNITYSDK_OFFSET(0x7666F0)
#define CJBOCHLCEPP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJBOCHLCEPP_TypeDefinitionIndex = 11805;

struct alignas(4) CJBOCHLCEPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJBOCHLCEPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 HNJDAOAAAFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_HNJDAOAAAFC_OFFSET))(this);
	}

	::System::Int32 KNFPJIJFAOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_KNFPJIJFAOL_OFFSET))(this);
	}

	::System::String* CEGKGHDLEKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_CEGKGHDLEKB_OFFSET))(this);
	}

	/*
	static ::CJBOCHLCEPP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CJBOCHLCEPP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Single IHGEKKCHLPM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_IHGEKKCHLPM_OFFSET))(this);
	}

	::System::Int32 FPKLHKBFPJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_FPKLHKBFPJL_OFFSET))(this);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Boolean BLHFPGNMNIA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_BLHFPGNMNIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* KCFAKAKEHMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_KCFAKAKEHMG_OFFSET))(this);
	}

	::System::Single MCPNCKMABKG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_MCPNCKMABKG_OFFSET))(this);
	}

	/*
	::CJBOCHLCEPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJBOCHLCEPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single PEKJBMNEHNN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_PEKJBMNEHNN_OFFSET))(this);
	}

	::System::Single EIIFDKCLLAF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBOCHLCEPP_EIIFDKCLLAF_OFFSET))(this);
	}
};
