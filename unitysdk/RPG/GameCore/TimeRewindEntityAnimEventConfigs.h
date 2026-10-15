#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleTimeRewindEntityAnimClipEventConfig; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimStateEventConfig; }
namespace RPG::GameCore { class TimeRewindEntityAnimEventConfigs; }

#define RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5A4D0)
#define RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5A370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityAnimEventConfigs_TypeDefinitionIndex = 16598;

	class TimeRewindEntityAnimEventConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*>* AnimStateEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*>* AnimClipEvents; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindEntityAnimEventConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindEntityAnimEventConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
