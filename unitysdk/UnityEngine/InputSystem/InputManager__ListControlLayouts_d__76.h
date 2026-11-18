#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputManager; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EED2940)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EED32C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EED3250)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EED3360)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EED32B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EED3260)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EED28B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED2890)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EED28E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1EED28F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1EED2900)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1EED2910)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY5_OFFSET UNITYSDK_OFFSET(0x1EED2920)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY6_OFFSET UNITYSDK_OFFSET(0x1EED2930)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager__ListControlLayouts_d__76_TypeDefinitionIndex = 31758;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76>
	class InputManager__ListControlLayouts_d__76 : public ::System::Object
	{
	public:
		::System::String* basedOn; // 0x10
		::System::Object* __7__wrap4; // 0x18
		::System::Byte _padding0[0x28];
		::System::Object* __7__wrap3; // 0x48
		::System::Byte _padding1[0x28];
		::UnityEngine::InputSystem::InputManager* __4__this; // 0x78
		::System::Object* __7__wrap2; // 0x80
		::System::Byte _padding2[0x28];
		::System::String* __2__current; // 0xB0
		::UnityEngine::InputSystem::Utilities::InternedString _internedBasedOn_5__2; // 0xB8
		::System::String* __3__basedOn; // 0xC8
		::System::Int32 __1__state; // 0xD0
		::System::Int32 __l__initialThreadId; // 0xD4

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY3_OFFSET))(this);
		}

		::System::Void __m__Finally4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY4_OFFSET))(this);
		}

		::System::Void __m__Finally5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY5_OFFSET))(this);
		}

		::System::Void __m__Finally6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76___M__FINALLY6_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__LISTCONTROLLAYOUTS_D__76_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
