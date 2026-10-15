#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleTimeRewindEntityAnimStateEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE960)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABE970)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABEC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimStateEventConfig_TypeDefinitionIndex = 16599;

	class SingleTimeRewindEntityAnimStateEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimStateName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
