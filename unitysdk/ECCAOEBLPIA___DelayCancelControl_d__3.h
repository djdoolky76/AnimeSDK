#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ECCAOEBLPIA;
namespace System { class Object; }

#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x12D032C0)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12D035B0)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D03660)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D036C0)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12D03670)
#define ECCAOEBLPIA___DELAYCANCELCONTROL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D035A0)

inline static constexpr unsigned int ECCAOEBLPIA___DelayCancelControl_d__3_TypeDefinitionIndex = 58293;

	template <typename T1, typename T2, typename T3>
	class ECCAOEBLPIA___DelayCancelControl_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::ECCAOEBLPIA* __4__this; // 0x18
		::System::Nullable_1<::UnityEngine::Quaternion> rotation; // 0x20
		::System::Byte _padding0[0xC];
		::System::Nullable_1<::UnityEngine::Vector3> position; // 0x34
		::System::Byte _padding1[0x8];
		::System::Int32 __1__state; // 0x44
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
