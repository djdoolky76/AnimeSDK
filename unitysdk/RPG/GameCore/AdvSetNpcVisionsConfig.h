#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetNpcVisionsConfig; }
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0B90)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0BA0)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B0B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcVisionsConfig_TypeDefinitionIndex = 19998;

	class AdvSetNpcVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionsByName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
