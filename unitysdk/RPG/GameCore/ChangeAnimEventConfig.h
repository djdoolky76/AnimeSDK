#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeAnimEventConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5363D0)
#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D536410)
#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D536370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeAnimEventConfig_TypeDefinitionIndex = 22881;

	class ChangeAnimEventConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
