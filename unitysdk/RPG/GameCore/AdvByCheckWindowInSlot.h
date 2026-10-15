#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D362080)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3622D0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3622A0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D362090)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D362050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowInSlot_TypeDefinitionIndex = 21288;

	class AdvByCheckWindowInSlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::System::UInt32 WindowIndex; // 0x30
		::System::UInt32 SlotIndex; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
