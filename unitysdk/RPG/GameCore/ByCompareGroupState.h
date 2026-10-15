#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGroupState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D485F00)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D486110)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4860D0)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D485F10)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D485EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupState_TypeDefinitionIndex = 22133;

	class ByCompareGroupState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 Value; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
