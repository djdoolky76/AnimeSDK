#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByLocalPlayerAvatarID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FCE70)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FD040)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FD010)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FCE80)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FCE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerAvatarID_TypeDefinitionIndex = 20588;

	class ByLocalPlayerAvatarID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
