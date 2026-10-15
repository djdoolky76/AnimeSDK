#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParticlePlaybackStatus.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxGradient.h"
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace ParticleRecorder { class ParticleRecorders; }
namespace RPG::Client { class Effect_ParticleBackwardMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_BIGOJBJOPJD_OFFSET UNITYSDK_OFFSET(0xCD4B4F0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD504E0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD45880)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD50400)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_EMFDJEBFMDM_OFFSET UNITYSDK_OFFSET(0xCD456A0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_FPMJENCKPKH_OFFSET UNITYSDK_OFFSET(0xCD4FF00)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD45620)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_IAHCJEFJIDB_OFFSET UNITYSDK_OFFSET(0xCD4B7B0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_IPFCGNCPOED_OFFSET UNITYSDK_OFFSET(0xCD4BFF0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JEEIHEJOHCI_OFFSET UNITYSDK_OFFSET(0xCD50120)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JHGCAPGIKPC_OFFSET UNITYSDK_OFFSET(0xCD4BCF0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JKIMCKJFNAH_OFFSET UNITYSDK_OFFSET(0xCD4B810)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD45990)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD452F0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_LHLAEPBFKNC_OFFSET UNITYSDK_OFFSET(0xCD4FEC0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MDNHBLIMPPD_OFFSET UNITYSDK_OFFSET(0xCD501C0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD45450)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MJIPEEFKHMF_OFFSET UNITYSDK_OFFSET(0xCD4D590)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD459F0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_OJDANDABKIB_OFFSET UNITYSDK_OFFSET(0xCD455C0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PCBIGPAGMEK_OFFSET UNITYSDK_OFFSET(0xCD4DA00)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD45350)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PEJNHFIIEPF_OFFSET UNITYSDK_OFFSET(0xCD45AF0)
#define RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD45A50)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ParticleBackwardBehavior_TypeDefinitionIndex = 70519;

	class Effect_ParticleBackwardBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::ParticleRecorder::BackwardParticlesInfoSO* ParticleInfoSO; // 0x38
		::System::Boolean _NeedReleaseSO; // 0x40
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _ParticleSystems; // 0x48
		::System::Collections::Generic::List_1<::ParticleRecorder::ParticleRecorders*>* _RecorderStates; // 0x50
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* _ParticleRenderers; // 0x58
		::UnityEngine::MaterialPropertyBlock* _TimeMPB; // 0x60
		::System::Boolean _OverridedMPB; // 0x68
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* _WorldSpaceBias; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _ParticleAlphaBackup; // 0x78
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* customDataCurves; // 0x80
		::System::Single TimePoint; // 0x88
		::System::Single ImmediateForwardMaxTime; // 0x8C
		::RPG::Client::ParticlePlaybackStatus PlaybackStatus; // 0x90
		::System::Int32 TotalFrame; // 0x94
		::System::Single PlaybackStartTime; // 0x98
		::System::Single frameRateTime; // 0x9C
		::System::Single skipTime; // 0xA0
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)UnitySDK::FromName("RPG.Client", "Effect_ParticleBackwardBehavior")->GetStaticField(0x33660);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_customDataList1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)UnitySDK::FromName("RPG.Client", "Effect_ParticleBackwardBehavior")->GetStaticField(0x33668);
		}

		static ::System::Int32* StaticGet__Time_ShaderID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_ParticleBackwardBehavior")->GetStaticField(0xA7A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void BIGOJBJOPJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_BIGOJBJOPJD_OFFSET))(this);
		}

		::System::Void OJDANDABKIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_OJDANDABKIB_OFFSET))(this);
		}

		::System::Void IAHCJEFJIDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_IAHCJEFJIDB_OFFSET))(this, a1);
		}

		::System::Void JKIMCKJFNAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JKIMCKJFNAH_OFFSET))(this);
		}

		::System::Void JHGCAPGIKPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JHGCAPGIKPC_OFFSET))(this);
		}

		::System::Void IPFCGNCPOED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_IPFCGNCPOED_OFFSET))(this, a1);
		}

		::System::Void PCBIGPAGMEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PCBIGPAGMEK_OFFSET))(this, a1);
		}

		::System::Void LHLAEPBFKNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_LHLAEPBFKNC_OFFSET))(this);
		}

		::System::Void FPMJENCKPKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_FPMJENCKPKH_OFFSET))(this);
		}

		::System::Void JEEIHEJOHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_JEEIHEJOHCI_OFFSET))(this);
		}

		::System::Void MJIPEEFKHMF(::UnityEngine::ParticleSystem_MinMaxGradient a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MJIPEEFKHMF_OFFSET))(this, a1, a2);
		}

		::System::Void MDNHBLIMPPD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_MDNHBLIMPPD_OFFSET))(this, a1);
		}

		::System::Void PEJNHFIIEPF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_PEJNHFIIEPF_OFFSET))(this, a1);
		}

		::System::Void EMFDJEBFMDM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_EMFDJEBFMDM_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ParticleBackwardMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_ParticleBackwardMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEBACKWARDBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
