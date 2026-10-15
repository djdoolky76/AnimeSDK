#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0xDC97230)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC97500)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC97830)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC97890)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC97840)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC974F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleBoard___DelayLaunch_d__13_TypeDefinitionIndex = 78545;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class DestroyRootPuzzleBoard___DelayLaunch_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::DestroyRootPuzzleBoard* __4__this; // 0x18
		::System::Boolean result; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___DELAYLAUNCH_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
