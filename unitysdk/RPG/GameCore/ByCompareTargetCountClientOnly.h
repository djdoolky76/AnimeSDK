#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByCompareTargetCount.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTargetCountClientOnly; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B0990)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B16E0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B1680)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B09A0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B16B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCountClientOnly_TypeDefinitionIndex = 23530;

	class ByCompareTargetCountClientOnly : public ::RPG::GameCore::ByCompareTargetCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
