#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAHPCEMFND;

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD936D60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS68_0__GETLEVELINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xD936F30)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int CartographyFiveDim___c__DisplayClass68_0_TypeDefinitionIndex = 74649;

	class CartographyFiveDim___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10
		::System::UInt32 instanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLevelInstance_b__0(::APAHPCEMFND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APAHPCEMFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS68_0__GETLEVELINSTANCE_B__0_OFFSET))(this, a1);
		}

	};
}
