#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ECCAOEBLPIA;
namespace System { class Object; }

#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x13AB95A0)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13AB9890)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13AB9940)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13AB99A0)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13AB9950)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13AB9880)

inline static constexpr unsigned int ECCAOEBLPIA___DelayCancelControl_d__3_TypeDefinitionIndex = 59549;

	template <typename T1, typename T2, typename T3>
	class ECCAOEBLPIA___DelayCancelControl_d__3 : public ::System::Object
	{
	public:
		::ECCAOEBLPIA* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Nullable_1<::UnityEngine::Quaternion> rotation; // 0x24
		::System::Byte _padding0[0xC];
		::System::Nullable_1<::UnityEngine::Vector3> position; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
