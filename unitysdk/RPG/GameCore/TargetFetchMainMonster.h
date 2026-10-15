#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchMainMonster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB635A0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63630)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB63610)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB635B0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB63530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMainMonster_TypeDefinitionIndex = 23928;

	class TargetFetchMainMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
