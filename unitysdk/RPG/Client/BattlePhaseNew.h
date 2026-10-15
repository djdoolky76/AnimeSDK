#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhase.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
class ADGFFEDNPPO;
class BJHICMCKBPE;
class CFNBLNHMHGO;
class JANDIGIAGOJ;
class JHIDGDHOJEF;
class MEJJIHNOIBD;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_BATTLEPHASENEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xC84BB00)
#define RPG_CLIENT_BATTLEPHASENEW_CTOR_OFFSET UNITYSDK_OFFSET(0xC84ABE0)
#define RPG_CLIENT_BATTLEPHASENEW_DEFAULTLEAVEBATTLEPROCESS_OFFSET UNITYSDK_OFFSET(0xC84B230)
#define RPG_CLIENT_BATTLEPHASENEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC84AD20)
#define RPG_CLIENT_BATTLEPHASENEW_ENTER_OFFSET UNITYSDK_OFFSET(0xC84AE80)
#define RPG_CLIENT_BATTLEPHASENEW_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xC84B8C0)
#define RPG_CLIENT_BATTLEPHASENEW_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC84B4A0)
#define RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0xC84BAF0)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0xC84BA10)
#define RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET UNITYSDK_OFFSET(0xC84BAE0)
#define RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC84B6B0)
#define RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET UNITYSDK_OFFSET(0xC84B000)
#define RPG_CLIENT_BATTLEPHASENEW_PROCESSLEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0xC84B070)
#define RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET UNITYSDK_OFFSET(0xC84B4F0)
#define RPG_CLIENT_BATTLEPHASENEW__ADDINPUTSOURCE_OFFSET UNITYSDK_OFFSET(0xC84B860)
#define RPG_CLIENT_BATTLEPHASENEW__INITPCBATTLEINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC84AF10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePhaseNew_TypeDefinitionIndex = 61039;

	class BattlePhaseNew : public ::RPG::Client::GamePhase
	{
	public:
		::MEJJIHNOIBD* _InputSourceCollection; // 0x18
		::JANDIGIAGOJ* _InitParam; // 0x20
		::JHIDGDHOJEF* _ModeView; // 0x28
		::ADGFFEDNPPO* _Mode; // 0x30
		::BJHICMCKBPE* _BattlePhaseNewInputProvider; // 0x38
		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "BattlePhaseNew")->GetStaticField(0x60770);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__BattlePhaseNewTickLateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "BattlePhaseNew")->GetStaticField(0x60778);
		}

		::System::Void _ctor(::JANDIGIAGOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JANDIGIAGOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_ENTER_OFFSET))(this);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LEAVE_OFFSET))(this, a1);
		}

		static ::System::Void ProcessLeaveBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_PROCESSLEAVEBATTLE_OFFSET))();
		}

		static ::System::Void DefaultLeaveBattleProcess()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_DEFAULTLEAVEBATTLEPROCESS_OFFSET))();
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _InitPCBattleInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__INITPCBATTLEINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void _AddInputSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW__ADDINPUTSOURCE_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::RPG::GameCore::BattleModeType get_ModeType()
		{
			return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_MODETYPE_OFFSET))(this);
		}

		::ADGFFEDNPPO* get_Mode()
		{
			return ((::ADGFFEDNPPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_MODE_OFFSET))(this);
		}

		::JANDIGIAGOJ* get_InitParam()
		{
			return ((::JANDIGIAGOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPHASENEW_GET_INITPARAM_OFFSET))(this);
		}

	};
}
