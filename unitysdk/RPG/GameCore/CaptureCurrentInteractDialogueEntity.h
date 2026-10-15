#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureCurrentInteractDialogueEntity; }
namespace System { class String; }

#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D557070)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D557080)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D557040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureCurrentInteractDialogueEntity_TypeDefinitionIndex = 22291;

	class CaptureCurrentInteractDialogueEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
