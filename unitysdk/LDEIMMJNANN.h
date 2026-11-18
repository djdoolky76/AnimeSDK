#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDEIMMJNANN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDEIMMJNANN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDEIMMJNANN_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LDEIMMJNANN_BNBLNPNAABI_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define LDEIMMJNANN_BNEGCMNEDCC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LDEIMMJNANN_BNFDOHDBCAN_OFFSET UNITYSDK_OFFSET(0x758200)
#define LDEIMMJNANN_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define LDEIMMJNANN_CHNCEBEGEFL_OFFSET UNITYSDK_OFFSET(0x754970)
#define LDEIMMJNANN_EHPIILJJLJL_OFFSET UNITYSDK_OFFSET(0x758320)
#define LDEIMMJNANN_GABCJKHPGLI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LDEIMMJNANN_GENDHDOJLKL_OFFSET UNITYSDK_OFFSET(0x763920)
#define LDEIMMJNANN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDEIMMJNANN_HICIEIAEOHO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LDEIMMJNANN_LEHBJCHKFLK_OFFSET UNITYSDK_OFFSET(0x757330)
#define LDEIMMJNANN_MIFLBABNJPK_OFFSET UNITYSDK_OFFSET(0x758780)
#define LDEIMMJNANN_OHNHLCKHHMF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LDEIMMJNANN_ONNMCMINPCA_OFFSET UNITYSDK_OFFSET(0x754920)
#define LDEIMMJNANN_PFLNFLAFCAL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define LDEIMMJNANN_PIINPFDEACF_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define LDEIMMJNANN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDEIMMJNANN_TypeDefinitionIndex = 9415;

struct alignas(4) LDEIMMJNANN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDEIMMJNANN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EHPIILJJLJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_EHPIILJJLJL_OFFSET))(this);
	}

	/*
	::LDEIMMJNANN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDEIMMJNANN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDEIMMJNANN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_BLLOPKJDOBE_OFFSET))(this);
	}

	::System::Int32 OHNHLCKHHMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_OHNHLCKHHMF_OFFSET))(this);
	}

	::System::Int32 MIFLBABNJPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_MIFLBABNJPK_OFFSET))(this);
	}

	::System::String* HICIEIAEOHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_HICIEIAEOHO_OFFSET))(this);
	}

	::System::Int32 ONNMCMINPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_ONNMCMINPCA_OFFSET))(this);
	}

	::System::Boolean GENDHDOJLKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LDEIMMJNANN_GENDHDOJLKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GABCJKHPGLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_GABCJKHPGLI_OFFSET))(this);
	}

	::System::Int32 BNEGCMNEDCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_BNEGCMNEDCC_OFFSET))(this);
	}

	::System::Boolean PIINPFDEACF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LDEIMMJNANN_PIINPFDEACF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CHNCEBEGEFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_CHNCEBEGEFL_OFFSET))(this);
	}

	::System::Int32 PFLNFLAFCAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_PFLNFLAFCAL_OFFSET))(this);
	}

	::System::Int32 BNBLNPNAABI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_BNBLNPNAABI_OFFSET))(this);
	}

	::System::Boolean BNFDOHDBCAN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LDEIMMJNANN_BNFDOHDBCAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LEHBJCHKFLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_LEHBJCHKFLK_OFFSET))(this);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEIMMJNANN_CBFABJJBIOD_OFFSET))(this);
	}
};
