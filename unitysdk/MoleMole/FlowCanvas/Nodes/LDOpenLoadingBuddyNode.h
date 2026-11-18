#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12451BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12451C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__INVOKE_B__2_0_OFFSET UNITYSDK_OFFSET(0x12451C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__INVOKE_B__2_1_OFFSET UNITYSDK_OFFSET(0x12451C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOpenLoadingBuddyNode_TypeDefinitionIndex = 68224;

	class LDOpenLoadingBuddyNode
	{
	public:
		::System::Boolean instant; // 0x60
		::System::Boolean _fadeDone; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE_INVOKE_OFFSET))(this, time);
		}

		::System::Void _Invoke_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__INVOKE_B__2_0_OFFSET))(this);
		}

		::System::Void _Invoke_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENLOADINGBUDDYNODE__INVOKE_B__2_1_OFFSET))(this);
		}
	};
}
