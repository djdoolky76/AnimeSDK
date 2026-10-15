#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }
namespace System::Diagnostics { class Stopwatch; }

#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4F970)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC574D0)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC57BA0)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC57C00)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC57BB0)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC57440)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EC574A0)
#define LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1EC57490)

inline static constexpr unsigned int LBJLBMOOJGM___StartBackgroundServicesAsync_d__3_TypeDefinitionIndex = 44297;

	template <typename T1, typename T2, typename T3>
	class LBJLBMOOJGM___StartBackgroundServicesAsync_d__3 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap2; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* __2__current; // 0x28
		::System::Diagnostics::Stopwatch* _sw_5__2; // 0x30
		::LBJLBMOOJGM* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3___M__FINALLY2_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___STARTBACKGROUNDSERVICESASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
