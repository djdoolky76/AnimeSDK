#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBNOGIFIKBC;

#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCD08620)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS24_0__GETCONTENTFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0xCD0A4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c__DisplayClass24_0_TypeDefinitionIndex = 63643;

	class EarlyAccessContent___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::UInt32 floorID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetContentFloor_b__0(::PBNOGIFIKBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBNOGIFIKBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__DISPLAYCLASS24_0__GETCONTENTFLOOR_B__0_OFFSET))(this, a1);
		}

	};
}
