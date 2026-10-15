#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRoadMapConfig_PlayTarget.h"
#include "unitysdk/System/Object.h"
class FICJADOJGMF_FHHABLLAPHM;
namespace System { class Object; }

#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0x157A1E50)
#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x157A2040)
#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG_PLAYTARGET__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157A23D0)
#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157A2440)
#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x157A23F0)
#define FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157A2030)

inline static constexpr unsigned int FICJADOJGMF_FHHABLLAPHM__Tick_d__26_TypeDefinitionIndex = 68753;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class FICJADOJGMF_FHHABLLAPHM__Tick_d__26 : public ::System::Object
	{
	public:
		::FICJADOJGMF_FHHABLLAPHM* __4__this; // 0x10
		::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget __2__current; // 0x18
		::System::Int32 _completeCount_5__2; // 0x38
		::System::Single fElapsedTimeInSec; // 0x3C
		::System::Int32 _index_5__4; // 0x40
		::System::Int32 _i_5__3; // 0x44
		::System::Int32 __1__state; // 0x48
		::System::Single fRealTime; // 0x4C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget System_Collections_Generic_IEnumerator_RPG_Client_WolfBroGunPlayRoadMapConfig_PlayTarget__get_Current()
		{
			return ((::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_WOLFBROGUNPLAYROADMAPCONFIG_PLAYTARGET__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FHHABLLAPHM__TICK_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
