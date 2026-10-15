#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }
namespace RPG::GameCore { class HideAllEntity; }

#define RPG_GAMECORE_HIDEALLENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D739DB0)
#define RPG_GAMECORE_HIDEALLENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D739DC0)
#define RPG_GAMECORE_HIDEALLENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D739D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideAllEntity_TypeDefinitionIndex = 21668;

	class HideAllEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Boolean HideNPC; // 0x19
		::System::Boolean HideNPCMonster; // 0x1A
		::System::Boolean HideProp; // 0x1B
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ClearNpcDistanceTrigger*>* NotHideEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideAllEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideAllEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
