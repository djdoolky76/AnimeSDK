#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGOPHPIBPJJ;
namespace System { class String; }

#define KMIIOPJLONP_BOCLHBECKIL_AOJAJKGBKBB_OFFSET UNITYSDK_OFFSET(0x1269B0A0)
#define KMIIOPJLONP_BOCLHBECKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1269B090)

inline static constexpr unsigned int KMIIOPJLONP_BOCLHBECKIL_TypeDefinitionIndex = 79016;

class KMIIOPJLONP_BOCLHBECKIL : public ::System::Object
{
public:
	::EGOPHPIBPJJ* ONFBODKPHPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIOPJLONP_BOCLHBECKIL__CTOR_OFFSET))(this);
	}

	::System::String* AOJAJKGBKBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIOPJLONP_BOCLHBECKIL_AOJAJKGBKBB_OFFSET))(this);
	}
};
