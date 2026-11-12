#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RelicLevelUpBeforeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICLEVELUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xE8E0700)
#define RPG_CLIENT_RELICLEVELUPBEFOREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E05B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicLevelUpBeforeData_TypeDefinitionIndex = 68826;

	class RelicLevelUpBeforeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* SubAffixPropertyValueBefore; // 0x10
		::RPG::GameCore::FixPoint MainAffixPropertyValueBefore; // 0x18
		::System::UInt32 LevelBefore; // 0x20
		::System::UInt32 ExpBefore; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICLEVELUPBEFOREDATA_CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::RelicLevelUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicLevelUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICLEVELUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}

	};
}
