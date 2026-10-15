#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB620A0)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62150)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB62110)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB620B0)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB62010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDialogueEntity_TypeDefinitionIndex = 23884;

	class TargetFetchDialogueEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
