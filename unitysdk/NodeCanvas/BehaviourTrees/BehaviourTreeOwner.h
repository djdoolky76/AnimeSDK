#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1E9CFE00)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_ROOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1E9D0370)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1E9D00B0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1E9CFF60)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1E9D0210)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_TICK_OFFSET UNITYSDK_OFFSET(0x1E9D04D0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D0630)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BehaviourTreeOwner_TypeDefinitionIndex = 29234;

	class BehaviourTreeOwner
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_repeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_REPEAT_OFFSET))(this);
		}

		::System::Void set_repeat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_REPEAT_OFFSET))(this, value);
		}

		::System::Single get_updateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_UPDATEINTERVAL_OFFSET))(this);
		}

		::System::Void set_updateInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_UPDATEINTERVAL_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status get_rootStatus()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_ROOTSTATUS_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status Tick()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_TICK_OFFSET))(this);
		}
	};
}
