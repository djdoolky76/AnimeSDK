#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_GROWTHUTILS___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA23B70)
#define RPG_CLIENT_GROWTHUTILS___C__DISPLAYCLASS2_0__HASUPGRADABLETRACENODE_B__0_OFFSET UNITYSDK_OFFSET(0x1CA23C60)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthUtils___c__DisplayClass2_0_TypeDefinitionIndex = 67535;

	class GrowthUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* avatar; // 0x10
		::System::UInt32 maxLevel; // 0x18
		::System::UInt32 maxPromotion; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUpgradableTraceNode_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS___C__DISPLAYCLASS2_0__HASUPGRADABLETRACENODE_B__0_OFFSET))(this, a1);
		}

	};
}
