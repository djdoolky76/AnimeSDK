#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimWeighted; }
namespace RPG::GameCore { class PropAnimTriggerRandomPlay; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917450)
#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D917480)
#define RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAnimTriggerRandomPlay_TypeDefinitionIndex = 22244;

	class PropAnimTriggerRandomPlay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimWeighted*>* AnimList; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPANIMTRIGGERRANDOMPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
