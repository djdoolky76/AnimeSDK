#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGDKOGLNFP;
class KDFFHMDFALG;
namespace RPG::Client { class Map; }
namespace System { class Object; }

#define DNGDKOGLNFP___WAITMAPROTATION_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0x1194CBA0)
#define DNGDKOGLNFP___WAITMAPROTATION_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1194D040)
#define DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1194D240)
#define DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1194D2A0)
#define DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1194D250)
#define DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194D030)

inline static constexpr unsigned int DNGDKOGLNFP___WaitMapRotation_d__20_TypeDefinitionIndex = 60536;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class DNGDKOGLNFP___WaitMapRotation_d__20 : public ::System::Object
	{
	public:
		::DNGDKOGLNFP* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::Map* _map_5__3; // 0x20
		::KDFFHMDFALG* _mapRotationManager_5__2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP___WAITMAPROTATION_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
