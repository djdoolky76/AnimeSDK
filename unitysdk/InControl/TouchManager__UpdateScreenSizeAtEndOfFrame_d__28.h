#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace InControl { class TouchManager; }
namespace System { class Object; }

#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7C970)
#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BA7F640)
#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BA7F760)
#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BA7F7C0)
#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BA7F770)
#define INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA7F630)

namespace InControl
{
	inline static constexpr unsigned int TouchManager__UpdateScreenSizeAtEndOfFrame_d__28_TypeDefinitionIndex = 40890;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
	class TouchManager__UpdateScreenSizeAtEndOfFrame_d__28 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::InControl::TouchManager* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER__UPDATESCREENSIZEATENDOFFRAME_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
