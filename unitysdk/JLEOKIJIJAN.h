#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLEOKIJIJAN_AnimStateListenerMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
class LGBHONLHNPN;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV3; }

#define JLEOKIJIJAN_AGGBPKGIABH_OFFSET UNITYSDK_OFFSET(0xB237930)
#define JLEOKIJIJAN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2386F0)
#define JLEOKIJIJAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB237470)
#define JLEOKIJIJAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB237690)
#define JLEOKIJIJAN_GNOPIDKIEPC_OFFSET UNITYSDK_OFFSET(0xB238510)
#define JLEOKIJIJAN_HBOKECJGHJH_OFFSET UNITYSDK_OFFSET(0xB237740)
#define JLEOKIJIJAN_IILMLIMDCPG_OFFSET UNITYSDK_OFFSET(0xB238460)
#define JLEOKIJIJAN_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xB238260)
#define JLEOKIJIJAN_JPAIJHBHHJH_OFFSET UNITYSDK_OFFSET(0xB238310)
#define JLEOKIJIJAN_KJBDOCEEDNA_OFFSET UNITYSDK_OFFSET(0xB2385A0)
#define JLEOKIJIJAN_KLIKKBOKKMI_OFFSET UNITYSDK_OFFSET(0xB237CA0)
#define JLEOKIJIJAN_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xB237F70)
#define JLEOKIJIJAN_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xB2381B0)
#define JLEOKIJIJAN_TICK_OFFSET UNITYSDK_OFFSET(0xB2377B0)
#define JLEOKIJIJAN__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB237B00)
#define JLEOKIJIJAN__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB237DA0)
#define JLEOKIJIJAN__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB238020)

inline static constexpr unsigned int JLEOKIJIJAN_TypeDefinitionIndex = 58852;

	class JLEOKIJIJAN
	{
	public:
		::LGBHONLHNPN* KJEGMDFNNNC; // 0x68
		::RPG::GameCore::CharacterModelComponent* LPONMEBFKPP; // 0x70
		::System::Boolean PFGEJMCAPJG; // 0x78
		::System::Boolean FNNEABNCAPH; // 0x79
		::System::Byte _padding0[0x2];
		::System::Int32 HFHILHOCPNL; // 0x7C
		::System::Int32 EKNMMBFJHHF; // 0x80
		::System::Int32 PNBLLILCHAG; // 0x84
		::JLEOKIJIJAN_AnimStateListenerMode OBKHAGMAFGP; // 0x88
		static ::System::Int32* StaticGet_HEHDLLIIBDM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JLEOKIJIJAN")->GetStaticField(0x6490);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV3*))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLEOKIJIJAN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Boolean KLIKKBOKKMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_KLIKKBOKKMI_OFFSET))(this, a1);
		}

		::System::Void JLNIGEMKDJH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_JLNIGEMKDJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPAIJHBHHJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_JPAIJHBHHJH_OFFSET))(this, a1);
		}

		::System::Void IILMLIMDCPG(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_IILMLIMDCPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GNOPIDKIEPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_GNOPIDKIEPC_OFFSET))(this);
		}

		::System::Void AGGBPKGIABH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_AGGBPKGIABH_OFFSET))(this);
		}

		::System::Void HBOKECJGHJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_HBOKECJGHJH_OFFSET))(this);
		}

		::System::Int32 KJBDOCEEDNA(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JLEOKIJIJAN_KJBDOCEEDNA_OFFSET))(this, a1, a2);
		}

	};
