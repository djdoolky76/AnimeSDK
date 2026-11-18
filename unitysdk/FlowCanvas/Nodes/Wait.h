#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAIT_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EF887C0)
#define FLOWCANVAS_NODES_WAIT_GET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x1EF887A0)
#define FLOWCANVAS_NODES_WAIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF887E0)
#define FLOWCANVAS_NODES_WAIT_SET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EF887D0)
#define FLOWCANVAS_NODES_WAIT_SET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x1EF887B0)
#define FLOWCANVAS_NODES_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF88840)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 30319;

	class Wait
	{
	public:
		::System::Single _timeLeft_k__BackingField; // 0x60
		::System::Single _normalized_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT__CTOR_OFFSET))(this);
		}

		::System::Single get_timeLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_GET_TIMELEFT_OFFSET))(this);
		}

		::System::Void set_timeLeft(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_SET_TIMELEFT_OFFSET))(this, value);
		}

		::System::Single get_normalized()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Void set_normalized(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_SET_NORMALIZED_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAIT_INVOKE_OFFSET))(this, time);
		}
	};
}
