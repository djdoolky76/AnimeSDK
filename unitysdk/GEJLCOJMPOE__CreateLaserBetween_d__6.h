#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GEJLCOJMPOE;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x159DBFF0)
#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x159DDB50)
#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159DE1F0)
#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159DE250)
#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x159DE200)
#define GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159DDB40)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class GEJLCOJMPOE__CreateLaserBetween_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::GameObject* startGameObject; // 0x18
		::GEJLCOJMPOE* __4__this; // 0x20
		::System::Single _waitProtectTime_5__4; // 0x28
		::System::Boolean needCreateNewEffect; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single _currentMoveTime_5__3; // 0x30
		::System::Single _moveDuration_5__2; // 0x34
		::UnityEngine::Vector3 position1; // 0x38
		::System::Int32 __1__state; // 0x44
		::UnityEngine::Vector3 position2; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__CREATELASERBETWEEN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
