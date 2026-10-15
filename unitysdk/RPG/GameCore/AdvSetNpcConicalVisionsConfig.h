#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetNpcConicalVisionsConfig; }
namespace RPG::GameCore { class ConicalVisionConfig; }

#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B09F0)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0A00)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B09C0)

namespace RPG::GameCore
{
	class AdvSetNpcConicalVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConicalVisionConfig*>* Visions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
