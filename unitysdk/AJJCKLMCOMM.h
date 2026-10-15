#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
class HIOEAKHGILF;
class KMGHEKCKAAP;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define AJJCKLMCOMM_CECGDNNKGGL_OFFSET UNITYSDK_OFFSET(0x12CBAA20)
#define AJJCKLMCOMM_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0x12CBCB30)
#define AJJCKLMCOMM_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB9F10)
#define AJJCKLMCOMM_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x12CBB7C0)
#define AJJCKLMCOMM_EBDLGPLDJLD_OFFSET UNITYSDK_OFFSET(0x12CBBD70)
#define AJJCKLMCOMM_EBOKNNMHCKN_OFFSET UNITYSDK_OFFSET(0x12CBBC60)
#define AJJCKLMCOMM_EGANLHMBBMA_OFFSET UNITYSDK_OFFSET(0x12CBBE80)
#define AJJCKLMCOMM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12CBA7D0)
#define AJJCKLMCOMM_FLGMELHIOBD_OFFSET UNITYSDK_OFFSET(0x12CBC400)
#define AJJCKLMCOMM_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12CBB760)
#define AJJCKLMCOMM_HOHBJOJLFMI_OFFSET UNITYSDK_OFFSET(0x12CBB490)
#define AJJCKLMCOMM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12CBA690)
#define AJJCKLMCOMM_NEGGAENIDLL_OFFSET UNITYSDK_OFFSET(0x12CBA4B0)
#define AJJCKLMCOMM_NPJLJOCKBKP_OFFSET UNITYSDK_OFFSET(0x12CBB570)
#define AJJCKLMCOMM_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0x12CBC210)
#define AJJCKLMCOMM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12CBB0B0)
#define AJJCKLMCOMM__ADDEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12CBB820)
#define AJJCKLMCOMM__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x12CBC150)
#define AJJCKLMCOMM__REMOVEEVENTEMITTER_OFFSET UNITYSDK_OFFSET(0x12CBC080)
#define AJJCKLMCOMM__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12CBB2D0)

inline static constexpr unsigned int AJJCKLMCOMM_TypeDefinitionIndex = 77089;

	class AJJCKLMCOMM
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x50
		::Entitas::ICollector_1<::HIOEAKHGILF*>* CJGEEMIIAEF; // 0x58
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x60
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_TEARDOWN_OFFSET))(this);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM__TEARDOWN_OFFSET))(this);
		}

		::System::Void NEGGAENIDLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_NEGGAENIDLL_OFFSET))(this);
		}

		::System::Void HOHBJOJLFMI(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_HOHBJOJLFMI_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void DestroyEntity(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_DESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Void _AddEventEmitter(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM__ADDEVENTEMITTER_OFFSET))(this, a1);
		}

		::System::Void _RemoveEventEmitter(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM__REMOVEEVENTEMITTER_OFFSET))(this, a1);
		}

		::System::Single _GetDeltaTime(::HIOEAKHGILF* a1, ::KMGHEKCKAAP* a2)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*, ::KMGHEKCKAAP*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM__GETDELTATIME_OFFSET))(this, a1, a2);
		}

		::System::Void CECGDNNKGGL(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_CECGDNNKGGL_OFFSET))(this, a1);
		}

		::System::Void NPJLJOCKBKP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_NPJLJOCKBKP_OFFSET))(this, a1);
		}

		::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> EBOKNNMHCKN(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_EBOKNNMHCKN_OFFSET))(this, a1, a2);
		}

		::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*> EBDLGPLDJLD(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::RPG::GCFreeClosure::ActionClosure_1<::UnityEngine::Collider*>(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_EBDLGPLDJLD_OFFSET))(this, a1, a2);
		}

		::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> EGANLHMBBMA(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerTargetType a2)
		{
			return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_EGANLHMBBMA_OFFSET))(this, a1, a2);
		}

		::System::Void POJDHPCCBFH(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_POJDHPCCBFH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CILFPIOIIEH(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_CILFPIOIIEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FLGMELHIOBD(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2, ::RPG::GameCore::FiveDimTriggerTargetType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*, ::RPG::GameCore::FiveDimTriggerTargetType))((::PBYTE)hIl2Cpp + AJJCKLMCOMM_FLGMELHIOBD_OFFSET))(this, a1, a2, a3);
		}

	};
