#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutsceneActorRow; }
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENEACTORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EB480)
#define RPG_GAMECORE_CUTSCENEACTORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EB2A0)

namespace RPG::GameCore
{
	class CutsceneActorRow : public ::System::Object
	{
	public:
		::System::String* ResidentPossessionKey; // 0x10
		::Il2CppArray<::System::String*>* ResidentEffectKey; // 0x18
		::System::String* ActorID; // 0x20
		::System::String* ActorModelPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEACTORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CutsceneActorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CutsceneActorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEACTORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
