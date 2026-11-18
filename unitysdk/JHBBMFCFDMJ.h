#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JHBBMFCFDMJ_AKENBMIALIO_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define JHBBMFCFDMJ_BBKDHLMPGLB_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHBBMFCFDMJ_DFKIDJKOJPP_OFFSET UNITYSDK_OFFSET(0x3583D0)
#define JHBBMFCFDMJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x823100)
#define JHBBMFCFDMJ_FCNIHGCJIHB_OFFSET UNITYSDK_OFFSET(0x1C360A50)
#define JHBBMFCFDMJ_FPLPPHPCELK_OFFSET UNITYSDK_OFFSET(0x823180)
#define JHBBMFCFDMJ_GAAPHDEDOGP_OFFSET UNITYSDK_OFFSET(0x388A60)
#define JHBBMFCFDMJ_HACFIOEGLPN_OFFSET UNITYSDK_OFFSET(0x1C3609C0)
#define JHBBMFCFDMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8230F0)

inline static constexpr unsigned int JHBBMFCFDMJ_TypeDefinitionIndex = 40770;

struct alignas(8) JHBBMFCFDMJ
{
	::System::Boolean _JFLCCHBGPOB_k__BackingField; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* _MPPKFIOPCIB_k__BackingField; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_TOSTRING_OFFSET))(this);
	}

	::System::Void GAAPHDEDOGP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_GAAPHDEDOGP_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::JHBBMFCFDMJ HACFIOEGLPN()
	{
		return ((::JHBBMFCFDMJ(*)())((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_HACFIOEGLPN_OFFSET))();
	}
	*/

	::System::String* BBKDHLMPGLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_BBKDHLMPGLB_OFFSET))(this);
	}

	::System::Boolean DFKIDJKOJPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_DFKIDJKOJPP_OFFSET))(this);
	}

	/*
	static ::JHBBMFCFDMJ FCNIHGCJIHB()
	{
		return ((::JHBBMFCFDMJ(*)())((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_FCNIHGCJIHB_OFFSET))();
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FPLPPHPCELK(::System::String* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_FPLPPHPCELK_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void AKENBMIALIO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHBBMFCFDMJ_AKENBMIALIO_OFFSET))(this, EGEGIMGMJHN);
	}
};
