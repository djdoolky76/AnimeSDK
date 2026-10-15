#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindEntityAnimOverride; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5A680)
#define RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5A4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityAnimOverride_TypeDefinitionIndex = 17582;

	class TimeRewindEntityAnimOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OverrideState; // 0x10
		::System::String* OverrideClipPath; // 0x18
		::System::Boolean OnlyOverrideController; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindEntityAnimOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindEntityAnimOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
