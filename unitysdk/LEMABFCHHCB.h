#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define LEMABFCHHCB_AABKAOPDINF_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define LEMABFCHHCB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LEMABFCHHCB_ANEIOADOAMH_OFFSET UNITYSDK_OFFSET(0x754920)
#define LEMABFCHHCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LEMABFCHHCB_BPJHJCAKMNC_OFFSET UNITYSDK_OFFSET(0x756140)
#define LEMABFCHHCB_EONDCJIEPKE_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define LEMABFCHHCB_EPAFNDKDJIC_OFFSET UNITYSDK_OFFSET(0x779C80)
#define LEMABFCHHCB_EPPOGPEHPMN_OFFSET UNITYSDK_OFFSET(0x762D20)
#define LEMABFCHHCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEMABFCHHCB_GGOPCOEODIM_OFFSET UNITYSDK_OFFSET(0x755440)
#define LEMABFCHHCB_GMONJOBFHJP_OFFSET UNITYSDK_OFFSET(0x757330)
#define LEMABFCHHCB_LLMHGMNKBJH_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define LEMABFCHHCB_MMDIHHKGEAG_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define LEMABFCHHCB_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LEMABFCHHCB_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LEMABFCHHCB_OLEHMHDGINF_OFFSET UNITYSDK_OFFSET(0x763920)
#define LEMABFCHHCB_PKMCJMIFMDO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LEMABFCHHCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LEMABFCHHCB_TypeDefinitionIndex = 16048;

struct alignas(4) LEMABFCHHCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEMABFCHHCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GGOPCOEODIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_GGOPCOEODIM_OFFSET))(this);
	}

	::System::Boolean BPJHJCAKMNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LEMABFCHHCB_BPJHJCAKMNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MMDIHHKGEAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_MMDIHHKGEAG_OFFSET))(this);
	}

	::System::Int32 AABKAOPDINF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_AABKAOPDINF_OFFSET))(this);
	}

	::System::Boolean EONDCJIEPKE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LEMABFCHHCB_EONDCJIEPKE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EPPOGPEHPMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_EPPOGPEHPMN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::LEMABFCHHCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEMABFCHHCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEMABFCHHCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OLEHMHDGINF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LEMABFCHHCB_OLEHMHDGINF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PKMCJMIFMDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_PKMCJMIFMDO_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 GMONJOBFHJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_GMONJOBFHJP_OFFSET))(this);
	}

	::System::Boolean LLMHGMNKBJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LEMABFCHHCB_LLMHGMNKBJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EPAFNDKDJIC(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + LEMABFCHHCB_EPAFNDKDJIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 ANEIOADOAMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMABFCHHCB_ANEIOADOAMH_OFFSET))(this);
	}
};
