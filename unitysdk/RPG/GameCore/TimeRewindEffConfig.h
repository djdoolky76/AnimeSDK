#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindEffControlType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDEFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB87C40)
#define RPG_GAMECORE_TIMEREWINDEFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB87A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEffConfig_TypeDefinitionIndex = 16604;

	class TimeRewindEffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TimeRewindEffControlType ControlType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EffectConfig* TriggerEffConfig; // 0x18
		::System::String* EffectUniqueName; // 0x20
		::System::String* BlendOutAnim; // 0x28
		::System::String* BlendInAnim; // 0x30
		::System::Single Duration; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDEFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindEffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindEffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDEFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
