#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchParamEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB644A0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB64530)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB64510)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB644B0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB64430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntity_TypeDefinitionIndex = 23913;

	class TargetFetchParamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
