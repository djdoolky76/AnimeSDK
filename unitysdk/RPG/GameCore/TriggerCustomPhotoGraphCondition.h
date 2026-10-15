#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerCustomPhotoGraphCondition; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC45650)
#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC45660)
#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC45620)

namespace RPG::GameCore
{
	class TriggerCustomPhotoGraphCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PhotoGraphName; // 0x18
		::System::String* CustomEvent; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
