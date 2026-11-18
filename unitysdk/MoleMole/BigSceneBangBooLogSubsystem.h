#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BigSceneBangBooLogSubsystem_GameResult.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class ALIHONNDCFO;
class GOCBFIMKCJL;
class HCKMEEDBEAP;
class HGAJKHIMKJP;
class LJIGBGLEDDA;
class PJBCFAALBFG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x18B79AA0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET UNITYSDK_OFFSET(0x18B79FA0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET UNITYSDK_OFFSET(0x18B7A7F0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x18B796A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18B7A8B0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B796F0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B79970)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET UNITYSDK_OFFSET(0x18B79EC0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x18B799F0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET UNITYSDK_OFFSET(0x18B7A730)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET UNITYSDK_OFFSET(0x18B7A790)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x18B79F40)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x18B79740)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET UNITYSDK_OFFSET(0x18B79BE0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x18B7A570)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x18B7A9D0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B7B0E0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7B180)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B7B1A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B7B230)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem_TypeDefinitionIndex = 73605;

	class BigSceneBangBooLogSubsystem
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem** StaticGet_Self()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem_TypeDefinitionIndex)->GetStaticField(0x37010);
		}
		// static const ::System::Int32 InvalidCheckPoint = -0x1; // 0x0
		// static const ::System::Int32 MaxQueueCount = 0xA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointDuration; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*>* _fallPosition; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointReviveTimes; // 0x20
		::System::Int32 _currentCheckPoint; // 0x28
		::System::Int32 _currentCheckPointArriveTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void ClearStaticStateOnSubsystemRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET))(this);
		}

		::System::Void RecordCurrentCheckPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET))(this);
		}

		::System::Void ArriveCheckPoint(::System::Int32 checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET))(this);
		}

		::System::Int32 ProcessGameResult(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET))(this, result);
		}

		::System::Void ReportRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET))(this);
		}

		::System::Void ReportExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET))(this);
		}

		::System::Void ReportFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET))(this);
		}

		static ::System::Void SendRequest(::ALIHONNDCFO* req)
		{
			return ((::System::Void(*)(::ALIHONNDCFO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET))(req);
		}

		::ALIHONNDCFO* Build(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::ALIHONNDCFO*(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET))(this, result);
		}

		static ::PJBCFAALBFG* Cast(::UnityEngine::Vector3 position)
		{
			return ((::PJBCFAALBFG*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET))(position);
		}

		::LJIGBGLEDDA* GetTemplate(::System::Int32 floorId)
		{
			return ((::LJIGBGLEDDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET))(this, floorId);
		}

		::System::Void TryExitGangBooGameAndShowReward(::GOCBFIMKCJL* quest, ::HCKMEEDBEAP* item)
		{
			return ((::System::Void(*)(::PVOID, ::GOCBFIMKCJL*, ::HCKMEEDBEAP*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET))(this, quest, item);
		}

		::Cysharp::Threading::Tasks::UniTask WaitTeleportComplete(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* rewards)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET))(this, rewards);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
