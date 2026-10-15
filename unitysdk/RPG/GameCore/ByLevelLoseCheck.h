#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLEVELLOSECHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52A420)
#define RPG_GAMECORE_BYLEVELLOSECHECK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52A5A0)
#define RPG_GAMECORE_BYLEVELLOSECHECK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52A570)
#define RPG_GAMECORE_BYLEVELLOSECHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52A430)
#define RPG_GAMECORE_BYLEVELLOSECHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52A3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLevelLoseCheck_TypeDefinitionIndex = 23435;

	class ByLevelLoseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
