#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TimelineEntityStateChangeCallback; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5C240)
#define RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5C0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineEntityStateChangeCallback_TypeDefinitionIndex = 20634;

	class TimelineEntityStateChangeCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ListenState; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimelineEntityStateChangeCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimelineEntityStateChangeCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
