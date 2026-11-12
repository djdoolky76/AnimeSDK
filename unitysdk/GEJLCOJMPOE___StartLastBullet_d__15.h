#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GEJLCOJMPOE;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define GEJLCOJMPOE___STARTLASTBULLET_D__15_CTOR_OFFSET UNITYSDK_OFFSET(0x16915800)
#define GEJLCOJMPOE___STARTLASTBULLET_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16917300)
#define GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169176C0)
#define GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16917720)
#define GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x169176D0)
#define GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169172F0)

inline static constexpr unsigned int GEJLCOJMPOE___StartLastBullet_d__15_TypeDefinitionIndex = 81277;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class GEJLCOJMPOE___StartLastBullet_d__15 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* startGameObject; // 0x10
		::GEJLCOJMPOE* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::UnityEngine::Vector3 position1; // 0x28
		::System::Int32 __1__state; // 0x34
		::UnityEngine::Vector3 position2; // 0x38
		::System::Boolean needCreateNewEffect; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE___STARTLASTBULLET_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
