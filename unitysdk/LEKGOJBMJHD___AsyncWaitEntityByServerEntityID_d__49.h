#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEKGOJBMJHD;
class NNDAJDLAHNC;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class Map; }
namespace System { class Object; }

#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_CTOR_OFFSET UNITYSDK_OFFSET(0xB6596F0)
#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB65B550)
#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB65BB30)
#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB65BB90)
#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB65BB40)
#define LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB65B530)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49>
	class LEKGOJBMJHD___AsyncWaitEntityByServerEntityID_d__49 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* _adventurePhase_5__2; // 0x10
		::NNDAJDLAHNC* __2__current; // 0x18
		::LEKGOJBMJHD* __4__this; // 0x20
		::RPG::Client::Map* _map_5__3; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::UInt32 serverEntityID; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD___ASYNCWAITENTITYBYSERVERENTITYID_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
