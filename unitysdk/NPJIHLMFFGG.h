#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKHGEDHCPHJ.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define NPJIHLMFFGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFEAE0)
#define NPJIHLMFFGG_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBCFEB50)
#define NPJIHLMFFGG_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBCFEBD0)

	class NPJIHLMFFGG : public ::FKHGEDHCPHJ
	{
	public:
		::System::Action* ENDGBKNJKKG; // 0xC8
		::System::Action* MAPEJKHFNHA; // 0xD0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NPJIHLMFFGG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPJIHLMFFGG_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + NPJIHLMFFGG_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
