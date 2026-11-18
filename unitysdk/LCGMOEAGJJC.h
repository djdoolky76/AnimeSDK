#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LCGMOEAGJJC_BBAEFDLHDAO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LCGMOEAGJJC_BFLIOGAEJHF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LCGMOEAGJJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCGMOEAGJJC_BICECNAIEKB_OFFSET UNITYSDK_OFFSET(0x7D7400)
#define LCGMOEAGJJC_BLMJEAIAEMK_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define LCGMOEAGJJC_BOJKGKKCHCN_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define LCGMOEAGJJC_CFGLOGOHKDN_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define LCGMOEAGJJC_COCJPCHLJEE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCGMOEAGJJC_GAMHOFECMHD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LCGMOEAGJJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCGMOEAGJJC_HCPCLDPOCGC_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define LCGMOEAGJJC_JCEPFAIKJII_OFFSET UNITYSDK_OFFSET(0x757520)
#define LCGMOEAGJJC_KCAOIABOEJP_OFFSET UNITYSDK_OFFSET(0x78A030)
#define LCGMOEAGJJC_LKFIBAMHMNM_1_OFFSET UNITYSDK_OFFSET(0x1B7EDC20)
#define LCGMOEAGJJC_LKFIBAMHMNM_OFFSET UNITYSDK_OFFSET(0x1B7EDBE0)
#define LCGMOEAGJJC_LKPAIHBCOMA_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define LCGMOEAGJJC_MCDPFLPAPCA_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define LCGMOEAGJJC_MDAMHNPDIJG_OFFSET UNITYSDK_OFFSET(0x755320)
#define LCGMOEAGJJC_PJOGFKBMGFE_OFFSET UNITYSDK_OFFSET(0x764220)
#define LCGMOEAGJJC_PKPGCLCDDMO_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define LCGMOEAGJJC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCGMOEAGJJC_TypeDefinitionIndex = 12494;

struct alignas(4) LCGMOEAGJJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCGMOEAGJJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JCEPFAIKJII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_JCEPFAIKJII_OFFSET))(this);
	}

	::System::Int32 MCDPFLPAPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_MCDPFLPAPCA_OFFSET))(this);
	}

	::System::Single KCAOIABOEJP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_KCAOIABOEJP_OFFSET))(this);
	}

	::System::Single CFGLOGOHKDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_CFGLOGOHKDN_OFFSET))(this);
	}

	::System::Int32 COCJPCHLJEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_COCJPCHLJEE_OFFSET))(this);
	}

	::System::Single BICECNAIEKB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BICECNAIEKB_OFFSET))(this);
	}

	::System::Single PKPGCLCDDMO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_PKPGCLCDDMO_OFFSET))(this);
	}

	::System::Single PJOGFKBMGFE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_PJOGFKBMGFE_OFFSET))(this);
	}

	::System::Int32 MDAMHNPDIJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_MDAMHNPDIJG_OFFSET))(this);
	}

	/*
	static ::LCGMOEAGJJC LKFIBAMHMNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCGMOEAGJJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_LKFIBAMHMNM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GAMHOFECMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_GAMHOFECMHD_OFFSET))(this);
	}

	::System::Int32 BOJKGKKCHCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BOJKGKKCHCN_OFFSET))(this);
	}

	::System::Int32 BFLIOGAEJHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BFLIOGAEJHF_OFFSET))(this);
	}

	::System::Int32 BBAEFDLHDAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BBAEFDLHDAO_OFFSET))(this);
	}

	/*
	static ::LCGMOEAGJJC LKFIBAMHMNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCGMOEAGJJC EIFONLCJOPG)
	{
		return ((::LCGMOEAGJJC(*)(::FlatBuffers::ByteBuffer*, ::LCGMOEAGJJC))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_LKFIBAMHMNM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LCGMOEAGJJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCGMOEAGJJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single BLMJEAIAEMK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_BLMJEAIAEMK_OFFSET))(this);
	}

	::System::Int32 LKPAIHBCOMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_LKPAIHBCOMA_OFFSET))(this);
	}

	::System::Single HCPCLDPOCGC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMOEAGJJC_HCPCLDPOCGC_OFFSET))(this);
	}
};
