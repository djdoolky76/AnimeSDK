#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsNPCControlled; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BD9E0)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3BDC30)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3BDC00)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3BD9F0)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3BD9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsNPCControlled_TypeDefinitionIndex = 20790;

	class AdventureByIsNPCControlled : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean Any; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
