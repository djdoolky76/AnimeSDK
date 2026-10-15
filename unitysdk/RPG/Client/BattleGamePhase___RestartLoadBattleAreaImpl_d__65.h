#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client { class Map; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_CTOR_OFFSET UNITYSDK_OFFSET(0xC822BB0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC8350A0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC835350)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC8353B0)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC835360)
#define RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC835090)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___RestartLoadBattleAreaImpl_d__65_TypeDefinitionIndex = 60972;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65>
	class BattleGamePhase___RestartLoadBattleAreaImpl_d__65 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::BattleGamePhaseInitParams* initParam; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20
		::RPG::Client::Map* _map_5__2; // 0x28
		::System::Single timeout; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Single _startTime_5__3; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___RESTARTLOADBATTLEAREAIMPL_D__65_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
