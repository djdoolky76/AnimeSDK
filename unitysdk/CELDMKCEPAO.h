#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectLodTemplateName.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace System { class String; }

#define CELDMKCEPAO_ADEONNLEGNE_OFFSET UNITYSDK_OFFSET(0xC9E4210)
#define CELDMKCEPAO_AEMLILOGEIC_OFFSET UNITYSDK_OFFSET(0xC9E3BB0)
#define CELDMKCEPAO_BCGBEGHOJPO_OFFSET UNITYSDK_OFFSET(0xC9E3F10)
#define CELDMKCEPAO_BENHJKHKPFB_OFFSET UNITYSDK_OFFSET(0xC9E41E0)
#define CELDMKCEPAO_BPKOLOLMMAH_OFFSET UNITYSDK_OFFSET(0xC9E3890)
#define CELDMKCEPAO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9E43C0)
#define CELDMKCEPAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E35B0)
#define CELDMKCEPAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9E35C0)
#define CELDMKCEPAO_FAPCHMOIPAA_OFFSET UNITYSDK_OFFSET(0xC9E41F0)
#define CELDMKCEPAO_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xC9E41C0)
#define CELDMKCEPAO_GIFPDEBKFHD_OFFSET UNITYSDK_OFFSET(0xC9E37A0)
#define CELDMKCEPAO_GMACBEAPCKL_OFFSET UNITYSDK_OFFSET(0xC9E3B20)
#define CELDMKCEPAO_JIDFKCIPPNA_OFFSET UNITYSDK_OFFSET(0xC9E3CB0)
#define CELDMKCEPAO_JJJFMELEJPC_OFFSET UNITYSDK_OFFSET(0xC9E40E0)
#define CELDMKCEPAO_JPBGKJHINBC_OFFSET UNITYSDK_OFFSET(0xC9E4000)
#define CELDMKCEPAO_JPBJMJAIDHJ_OFFSET UNITYSDK_OFFSET(0xC9E3C70)
#define CELDMKCEPAO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC9E36A0)
#define CELDMKCEPAO_MCEGIPOFDHB_OFFSET UNITYSDK_OFFSET(0xC9E4100)
#define CELDMKCEPAO_MHHPPOCHLKL_OFFSET UNITYSDK_OFFSET(0xC9E4200)
#define CELDMKCEPAO_MMJBFPLIPDO_OFFSET UNITYSDK_OFFSET(0xC9E40D0)
#define CELDMKCEPAO_MPDNOPHBEGC_OFFSET UNITYSDK_OFFSET(0xC9E3AC0)
#define CELDMKCEPAO_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xC9E41D0)
#define CELDMKCEPAO_TICK_OFFSET UNITYSDK_OFFSET(0xC9E3CF0)

inline static constexpr unsigned int CELDMKCEPAO_TypeDefinitionIndex = 57331;

	class CELDMKCEPAO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* FJFHCCEOINJ; // 0x18
		::RPG::Client::TriggerEffectParams* IGFBACMGOEJ; // 0x20
		::RPG::Client::TriggerEffectParams* GKCKLJDIDNC; // 0x28
		::RPG::Client::MonoEffect* HLGLJIDEMDI; // 0x30
		::RPG::Client::MonoEffectManager* OGGCEHFOMMI; // 0x38
		::RPG::GameCore::MonoEffectLodDetail* KAOABIDMBDB; // 0x40
		::RPG::GameCore::MonoEffectLodTemplateName ILIHGKMNBMH; // 0x48
		::System::Nullable_1<::UnityEngine::Vector3> LLKOGDPHHEA; // 0x4C
		::System::Byte _padding0[0x8];
		::System::Int32 _LodLevel_k__BackingField; // 0x5C
		::System::Boolean NONKJJHAMPP; // 0x60
		::System::Boolean DALKJPIGDNO; // 0x61
		::System::Boolean HMBANLFHDDL; // 0x62
		::System::Boolean AOCKKNBBKPB; // 0x63
		::RPG::MVector3 KFEJGBAKKEF; // 0x64
		static ::System::String** StaticGet_BOHKEBONIFC()
		{
			return (::System::String**)UnitySDK::FromName("", "CELDMKCEPAO")->GetStaticField(0x1DA0);
		}

		static ::System::String** StaticGet_IDNMDHEGFAE()
		{
			return (::System::String**)UnitySDK::FromName("", "CELDMKCEPAO")->GetStaticField(0x1DA8);
		}

		static ::System::Single* StaticGet_GHICEPFCLIJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "CELDMKCEPAO")->GetStaticField(0x1C60);
		}

		static ::System::Single* StaticGet_CLMJNLDFNAB()
		{
			return (::System::Single*)UnitySDK::FromName("", "CELDMKCEPAO")->GetStaticField(0x1C64);
		}

		::System::Void _ctor(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CELDMKCEPAO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELDMKCEPAO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::MonoEffectLodTemplateName a1, ::RPG::GameCore::MonoEffectLodDetail* a2, ::RPG::Client::MonoEffectManager* a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonoEffectLodTemplateName, ::RPG::GameCore::MonoEffectLodDetail*, ::RPG::Client::MonoEffectManager*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CELDMKCEPAO_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BPKOLOLMMAH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CELDMKCEPAO_BPKOLOLMMAH_OFFSET))(this, a1);
		}

		::System::Void GIFPDEBKFHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CELDMKCEPAO_GIFPDEBKFHD_OFFSET))(this, a1);
		}

		::System::Void MPDNOPHBEGC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CELDMKCEPAO_MPDNOPHBEGC_OFFSET))(this, a1);
		}

		::System::Void AEMLILOGEIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_AEMLILOGEIC_OFFSET))(this);
		}

		::System::Void GMACBEAPCKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_GMACBEAPCKL_OFFSET))(this);
		}

		::RPG::Client::TriggerEffectParams* JPBJMJAIDHJ()
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_JPBJMJAIDHJ_OFFSET))(this);
		}

		static ::RPG::GameCore::MonoEffectLodTemplateName JIDFKCIPPNA()
		{
			return ((::RPG::GameCore::MonoEffectLodTemplateName(*)())((::PBYTE)hIl2Cpp + CELDMKCEPAO_JIDFKCIPPNA_OFFSET))();
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CELDMKCEPAO_TICK_OFFSET))(this, a1);
		}

		::System::Void BCGBEGHOJPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_BCGBEGHOJPO_OFFSET))(this);
		}

		::System::Void MMJBFPLIPDO(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CELDMKCEPAO_MMJBFPLIPDO_OFFSET))(this, a1);
		}

		::RPG::MVector3 JJJFMELEJPC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_JJJFMELEJPC_OFFSET))(this);
		}

		::UnityEngine::Bounds MCEGIPOFDHB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_MCEGIPOFDHB_OFFSET))(this);
		}

		::System::Int32 get_LodLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_GET_LODLEVEL_OFFSET))(this);
		}

		::System::Void set_LodLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CELDMKCEPAO_SET_LODLEVEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JPBGKJHINBC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_JPBGKJHINBC_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* BENHJKHKPFB()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_BENHJKHKPFB_OFFSET))(this);
		}

		::System::Void FAPCHMOIPAA(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CELDMKCEPAO_FAPCHMOIPAA_OFFSET))(this, a1);
		}

		::System::Boolean MHHPPOCHLKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_MHHPPOCHLKL_OFFSET))(this);
		}

		::System::Boolean ADEONNLEGNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDMKCEPAO_ADEONNLEGNE_OFFSET))(this);
		}

	};
