#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropDayOfWeekAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDayOfWeekActionParamObject; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D949220)
#define RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D948FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDayOfWeekActionParamObject_TypeDefinitionIndex = 22075;

	class PropDayOfWeekActionParamObject : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropDayOfWeekAction Action; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeStart; // 0x20
		::System::Single TransitionDuration; // 0x24
		::System::Boolean FixedTransitionDuration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDayOfWeekActionParamObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDayOfWeekActionParamObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
