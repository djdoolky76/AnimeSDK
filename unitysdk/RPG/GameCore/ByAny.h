#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4573D0)
#define RPG_GAMECORE_BYANY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4575A0)
#define RPG_GAMECORE_BYANY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D457570)
#define RPG_GAMECORE_BYANY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4573E0)
#define RPG_GAMECORE_BYANY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4573A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAny_TypeDefinitionIndex = 23795;

	class ByAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
