#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIPanelGroup; }

#define RPG_GAMECORE_UIPANELGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC436A0)
#define RPG_GAMECORE_UIPANELGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC435E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPanelGroup_TypeDefinitionIndex = 17145;

	class UIPanelGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPANELGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIPanelGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIPanelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPANELGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
