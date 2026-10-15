#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEAC00)
#define RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEAAE0)

namespace RPG::GameCore
{
	class SingleAnimBehaviourEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventUniqueKey; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleAnimBehaviourEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleAnimBehaviourEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMBEHAVIOUREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
