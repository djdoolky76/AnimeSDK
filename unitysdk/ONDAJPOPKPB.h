#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ONDAJPOPKPB_BGGNHFEOCGN_OFFSET UNITYSDK_OFFSET(0x755190)
#define ONDAJPOPKPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ONDAJPOPKPB_BHLCBOEDNFG_OFFSET UNITYSDK_OFFSET(0x757330)
#define ONDAJPOPKPB_CCIAABBEHDM_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define ONDAJPOPKPB_DBGOJEBLJFJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define ONDAJPOPKPB_DDLALGMDLBH_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define ONDAJPOPKPB_DIMCFCMEDJH_OFFSET UNITYSDK_OFFSET(0x761710)
#define ONDAJPOPKPB_DJAMJGDBIPC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ONDAJPOPKPB_EJABMONBGDD_OFFSET UNITYSDK_OFFSET(0x757B50)
#define ONDAJPOPKPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONDAJPOPKPB_KCHJNNGKEEK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ONDAJPOPKPB_KFBJMECNGLO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ONDAJPOPKPB_KLMHFCOLHCN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ONDAJPOPKPB_LDNAKPDNGGJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define ONDAJPOPKPB_LKPCPEAOBEI_OFFSET UNITYSDK_OFFSET(0x7A69D0)
#define ONDAJPOPKPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1736D190)
#define ONDAJPOPKPB_ODAIAJHLLPH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define ONDAJPOPKPB_ONMJPDCKEEP_OFFSET UNITYSDK_OFFSET(0x760650)
#define ONDAJPOPKPB_PHEOHHKIBHB_OFFSET UNITYSDK_OFFSET(0x758780)
#define ONDAJPOPKPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ONDAJPOPKPB_TypeDefinitionIndex = 12002;

struct alignas(4) ONDAJPOPKPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDAJPOPKPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONDAJPOPKPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ONDAJPOPKPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ONMJPDCKEEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_ONMJPDCKEEP_OFFSET))(this);
	}

	::System::Int32 DDLALGMDLBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_DDLALGMDLBH_OFFSET))(this);
	}

	::System::Int32 PHEOHHKIBHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_PHEOHHKIBHB_OFFSET))(this);
	}

	::System::Int32 BGGNHFEOCGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_BGGNHFEOCGN_OFFSET))(this);
	}

	::System::Boolean LKPCPEAOBEI(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_LKPCPEAOBEI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DJAMJGDBIPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_DJAMJGDBIPC_OFFSET))(this);
	}

	::System::Boolean CCIAABBEHDM(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_CCIAABBEHDM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KFBJMECNGLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_KFBJMECNGLO_OFFSET))(this);
	}

	::System::Int32 ODAIAJHLLPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_ODAIAJHLLPH_OFFSET))(this);
	}

	::System::Int32 KLMHFCOLHCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_KLMHFCOLHCN_OFFSET))(this);
	}

	::System::Boolean EJABMONBGDD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_EJABMONBGDD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KCHJNNGKEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_KCHJNNGKEEK_OFFSET))(this);
	}

	::System::Int32 DBGOJEBLJFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_DBGOJEBLJFJ_OFFSET))(this);
	}

	::System::String* DIMCFCMEDJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_DIMCFCMEDJH_OFFSET))(this);
	}

	::System::String* LDNAKPDNGGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_LDNAKPDNGGJ_OFFSET))(this);
	}

	::System::Int32 BHLCBOEDNFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_BHLCBOEDNFG_OFFSET))(this);
	}

	/*
	::ONDAJPOPKPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONDAJPOPKPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDAJPOPKPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
