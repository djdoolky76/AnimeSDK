#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISINROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38E700)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D38EB60)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D38EB20)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38E710)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38E6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsInRotation_TypeDefinitionIndex = 20784;

	class AdventureByIsInRotation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGroupID; // 0x20
		::System::UInt32 TargetGroupNPCID; // 0x24
		::System::String* TargetName; // 0x28
		::RPG::GameCore::EntityType TargetType; // 0x30
		::System::UInt32 NpcID; // 0x34
		::System::String* AreaName; // 0x38
		::System::String* AnchorName; // 0x40
		::RPG::MVector3 Rotation; // 0x48
		::System::Single AngleTolerate; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
