#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCameraAimTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB612C0)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61350)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61330)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB612D0)
#define RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAimTargetList_TypeDefinitionIndex = 24031;

	class TargetFetchCameraAimTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAAIMTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
