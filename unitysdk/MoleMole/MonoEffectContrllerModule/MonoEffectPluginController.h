#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BulletModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TargetSelectorModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/NNBMBHMDPFH.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CLPEHLLCADI;
class FDKIIFCDJNP;
class IANAIPMNOBC;
class MPHHJLPIKPO;
namespace MoleMole::MonoEffectContrllerModule { class PreviewModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ABEOLFMGPCD_OFFSET UNITYSDK_OFFSET(0x16266840)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16266FC0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16267180)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_FORCESTOPALLPARTICLE_OFFSET UNITYSDK_OFFSET(0x16266010)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETMAINSYSTEM_OFFSET UNITYSDK_OFFSET(0x16266430)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETSYSTEMLIST_OFFSET UNITYSDK_OFFSET(0x16266470)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16266420)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x16266410)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INITEMITTERINERTIA_OFFSET UNITYSDK_OFFSET(0x162669D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x162664B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x16266160)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16267000)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_PROCESSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x162662C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_TICKEMITTERINERTIAANDGETCUMOFFSET_OFFSET UNITYSDK_OFFSET(0x16266BB0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16267130)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16267050)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int MonoEffectPluginController_TypeDefinitionIndex = 64539;

	class MonoEffectPluginController : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		static ::UnityEngine::ParticleSystem_Particle* StaticGet_HIDLCLHHPOM()
		{
			return (::UnityEngine::ParticleSystem_Particle*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginController_TypeDefinitionIndex)->GetStaticField(0xE620);
		}
		// static const ::System::Int32 EmptyParticleRandomSeed = 0x0; // 0x0
		::CLPEHLLCADI* ACPLPAICPAI; // 0x58
		::UnityEngine::ParticleSystem* MainSystem; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* SystemList; // 0x68
		::System::Collections::Generic::List_1<::MPHHJLPIKPO*>* EMKKPDDOICC; // 0x70
		::MoleMole::MonoEffectContrllerModule::SetupModule SetupModule; // 0x78
		::System::Byte _padding0[0x7];
		::MoleMole::MonoEffectContrllerModule::TargetSelectorModule TargetConfig; // 0x80
		::MoleMole::MonoEffectContrllerModule::TraceGroupModule TraceGroup; // 0xD0
		::MoleMole::MonoEffectContrllerModule::BulletModule BulletModule; // 0xE0
		::MoleMole::MonoEffectContrllerModule::PreviewModule* Preview; // 0x110
		::FDKIIFCDJNP* KLLCOBLFNAE; // 0x118
		::System::Single DJILLFFKOME; // 0x120
		::System::Single HAPDEMKNIEL; // 0x124
		::System::Single NKBABOCBCHF; // 0x128
		::NNBMBHMDPFH KDEJIPCMKAB; // 0x12C
		::UnityEngine::Vector3 OFILGJGNKHI; // 0x130
		::UnityEngine::Vector3 BPGGEAJOBPO; // 0x13C
		::IANAIPMNOBC* HLNIGOECJFO; // 0x148
		::UnityEngine::Vector3 PPNDKPNBFDL; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void ForceStopAllParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_FORCESTOPALLPARTICLE_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ISENABLED_OFFSET))(this);
		}

		::System::Void ProcessController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_PROCESSCONTROLLER_OFFSET))(this);
		}

		::CLPEHLLCADI* get_Random()
		{
			return ((::CLPEHLLCADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_RANDOM_OFFSET))(this);
		}

		::FDKIIFCDJNP* get_BoundComponent()
		{
			return ((::FDKIIFCDJNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GET_BOUNDCOMPONENT_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* GetMainSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETMAINSYSTEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* GetSystemList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_GETSYSTEMLIST_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::MPHHJLPIKPO*>* PPIOHHEBHJD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MPHHJLPIKPO*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INIT_OFFSET))(this, PPIOHHEBHJD);
		}

		::System::Void InitEmitterInertia(::System::Single FIHNIHADLBB, ::System::Single JIKNOEGENOB, ::System::Single CLMNLPKFBFA, ::NNBMBHMDPFH JLHBMCDFFBK, ::UnityEngine::Vector3 MKJICBEEOGA, ::UnityEngine::Vector3 MBIJOPBFEEI, ::IANAIPMNOBC* HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::NNBMBHMDPFH, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::IANAIPMNOBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_INITEMITTERINERTIA_OFFSET))(this, FIHNIHADLBB, JIKNOEGENOB, CLMNLPKFBFA, JLHBMCDFFBK, MKJICBEEOGA, MBIJOPBFEEI, HODAIDNDKHD);
		}

		::UnityEngine::Vector3 TickEmitterInertiaAndGetCumOffset(::System::Single PBCAAADNEPK)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_TICKEMITTERINERTIAANDGETCUMOFFSET_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ABEOLFMGPCD(::System::Collections::Generic::List_1<::MPHHJLPIKPO*>* PPIOHHEBHJD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MPHHJLPIKPO*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_ABEOLFMGPCD_OFFSET))(this, PPIOHHEBHJD);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_BBOMJDBNHIC_OFFSET))(this);
		}
	};
}
