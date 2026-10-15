#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE0BE0)
#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15DE0C10)
#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DE0C90)
#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DE0CF0)
#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15DE0CA0)
#define HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DE0C00)

inline static constexpr unsigned int HipplenBuilderMiniGameController__DestroyRingAfter2Seconds_d__16_TypeDefinitionIndex = 47204;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class HipplenBuilderMiniGameController__DestroyRingAfter2Seconds_d__16 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* ringGO; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__DESTROYRINGAFTER2SECONDS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
