#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindParentObjectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB88F30)
#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB88CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindParentObjectConfig_TypeDefinitionIndex = 16613;

	class TimeRewindParentObjectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PropID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TriggerStableStateName; // 0x18
		::System::Single TriggerStableStateNormalizeTime; // 0x20
		::RPG::MVector3 ChildOffsetPos; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindParentObjectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindParentObjectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
