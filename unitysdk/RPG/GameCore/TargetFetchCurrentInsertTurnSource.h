#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB34360)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB343F0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB343D0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB34370)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB342F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentInsertTurnSource_TypeDefinitionIndex = 24032;

	class TargetFetchCurrentInsertTurnSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
