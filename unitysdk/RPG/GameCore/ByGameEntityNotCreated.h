#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F3B20)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F3CE0)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F3CB0)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F3B30)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F3AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGameEntityNotCreated_TypeDefinitionIndex = 20310;

	class ByGameEntityNotCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
