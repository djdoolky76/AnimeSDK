#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByEntityCreated; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYCREATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE32ED0)
#define RPG_GAMECORE_BYENTITYCREATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE330A0)
#define RPG_GAMECORE_BYENTITYCREATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE33070)
#define RPG_GAMECORE_BYENTITYCREATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE32EE0)
#define RPG_GAMECORE_BYENTITYCREATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE32EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityCreated_TypeDefinitionIndex = 21064;

	class ByEntityCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
