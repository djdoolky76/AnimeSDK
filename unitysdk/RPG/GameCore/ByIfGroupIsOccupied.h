#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIfGroupIsOccupied; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D48C0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D4AD0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D4AA0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D48D0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D4890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIfGroupIsOccupied_TypeDefinitionIndex = 21094;

	class ByIfGroupIsOccupied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
