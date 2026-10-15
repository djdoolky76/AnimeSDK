#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCameraAnchorTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB613D0)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61460)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61440)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB613E0)
#define RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCameraAnchorTargetList_TypeDefinitionIndex = 24030;

	class TargetFetchCameraAnchorTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCAMERAANCHORTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
