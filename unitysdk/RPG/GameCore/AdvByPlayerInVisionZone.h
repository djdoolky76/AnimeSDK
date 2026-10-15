#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByPlayerInVisionZone; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D397D10)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D397F10)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D397EE0)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D397D20)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D397CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerInVisionZone_TypeDefinitionIndex = 20018;

	class AdvByPlayerInVisionZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VisionZoneTag>* ZoneTags; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
