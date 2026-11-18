#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_CONNCJCBMNE;

#define FBAMLABJMKF_LHEMLEDLFHN_GODPCJPMGIH_OFFSET UNITYSDK_OFFSET(0x11AB4860)
#define FBAMLABJMKF_LHEMLEDLFHN_HIKCMHHIKIM_OFFSET UNITYSDK_OFFSET(0x11AB4A50)
#define FBAMLABJMKF_LHEMLEDLFHN_LOHPALFKEOK_OFFSET UNITYSDK_OFFSET(0x11AB4A60)
#define FBAMLABJMKF_LHEMLEDLFHN__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB4850)

inline static constexpr unsigned int FBAMLABJMKF_LHEMLEDLFHN_TypeDefinitionIndex = 78147;

class FBAMLABJMKF_LHEMLEDLFHN : public ::System::Object
{
public:
	::FBAMLABJMKF_CONNCJCBMNE* KGFKHBMEKBL; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHEMLEDLFHN__CTOR_OFFSET))(this);
	}

	::System::Void GODPCJPMGIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHEMLEDLFHN_GODPCJPMGIH_OFFSET))(this);
	}

	::System::Single HIKCMHHIKIM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHEMLEDLFHN_HIKCMHHIKIM_OFFSET))(this);
	}

	::System::Void LOHPALFKEOK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LHEMLEDLFHN_LOHPALFKEOK_OFFSET))(this, EGEGIMGMJHN);
	}
};
