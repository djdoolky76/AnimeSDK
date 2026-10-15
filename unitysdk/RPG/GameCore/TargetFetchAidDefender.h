#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB31600)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB31690)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB31670)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB31610)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB31590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidDefender_TypeDefinitionIndex = 24007;

	class TargetFetchAidDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
