#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NCKGKHKDBLJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCKGKHKDBLJ_APIGLFOFEJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NCKGKHKDBLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCKGKHKDBLJ_BLGFAKIFKLH_OFFSET UNITYSDK_OFFSET(0x758780)
#define NCKGKHKDBLJ_BLIKENCCMJO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NCKGKHKDBLJ_CLBIFNPKEGP_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NCKGKHKDBLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCKGKHKDBLJ_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NCKGKHKDBLJ_ILJIOGADGKB_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NCKGKHKDBLJ_JOHGFNCFKKP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define NCKGKHKDBLJ_KKFMEHALGFH_OFFSET UNITYSDK_OFFSET(0x756360)
#define NCKGKHKDBLJ_NLNODLILGMM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NCKGKHKDBLJ_ONLECIJIOKK_OFFSET UNITYSDK_OFFSET(0x755790)
#define NCKGKHKDBLJ_POLMPMADEHK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NCKGKHKDBLJ_PPPBDHHMNAF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define NCKGKHKDBLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCKGKHKDBLJ_TypeDefinitionIndex = 16559;

struct alignas(4) NCKGKHKDBLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NCKGKHKDBLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCKGKHKDBLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLNODLILGMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_NLNODLILGMM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BLGFAKIFKLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_BLGFAKIFKLH_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 ONLECIJIOKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_ONLECIJIOKK_OFFSET))(this);
	}

	::System::Int32 JOHGFNCFKKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_JOHGFNCFKKP_OFFSET))(this);
	}

	::System::Int32 BLIKENCCMJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_BLIKENCCMJO_OFFSET))(this);
	}

	::System::Int32 ILJIOGADGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_ILJIOGADGKB_OFFSET))(this);
	}

	::System::Boolean PPPBDHHMNAF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_PPPBDHHMNAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 POLMPMADEHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_POLMPMADEHK_OFFSET))(this);
	}

	::System::Boolean KKFMEHALGFH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_KKFMEHALGFH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean CLBIFNPKEGP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_CLBIFNPKEGP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 APIGLFOFEJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKGKHKDBLJ_APIGLFOFEJD_OFFSET))(this);
	}
};
