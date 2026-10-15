#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ResultModuleConfig; }

#define DFFOLOMKDOC_BLIPMBFBNDF_OFFSET UNITYSDK_OFFSET(0xE81D830)
#define DFFOLOMKDOC_CCTOR_OFFSET UNITYSDK_OFFSET(0xE81FFC0)
#define DFFOLOMKDOC_CJBIJEEKKHL_OFFSET UNITYSDK_OFFSET(0xE81F630)
#define DFFOLOMKDOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE81D350)
#define DFFOLOMKDOC_CTOR_OFFSET UNITYSDK_OFFSET(0xE81D310)
#define DFFOLOMKDOC_DDGGFMPIHNF_OFFSET UNITYSDK_OFFSET(0xE81F8B0)
#define DFFOLOMKDOC_EIJNLLPIIHG_OFFSET UNITYSDK_OFFSET(0xE81FD70)
#define DFFOLOMKDOC_FOHNCNKHFID_OFFSET UNITYSDK_OFFSET(0xE81F560)
#define DFFOLOMKDOC_GKIGAKCJIIF_OFFSET UNITYSDK_OFFSET(0xE81DFD0)
#define DFFOLOMKDOC_JHCMIEAGEFE_OFFSET UNITYSDK_OFFSET(0xE81F360)
#define DFFOLOMKDOC_JMKHEALECCC_OFFSET UNITYSDK_OFFSET(0xE81F9F0)
#define DFFOLOMKDOC_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xE81D780)
#define DFFOLOMKDOC_KNMJELOPHFE_OFFSET UNITYSDK_OFFSET(0xE81E3D0)
#define DFFOLOMKDOC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE81D440)
#define DFFOLOMKDOC_MIBNONCHJHD_OFFSET UNITYSDK_OFFSET(0xE81F500)
#define DFFOLOMKDOC_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xE81D570)
#define DFFOLOMKDOC_NNLDJLFIOEJ_OFFSET UNITYSDK_OFFSET(0xE81E4A0)
#define DFFOLOMKDOC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE81F320)

inline static constexpr unsigned int DFFOLOMKDOC_TypeDefinitionIndex = 69640;

	class DFFOLOMKDOC : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::ResultModuleConfig* IMFPFMNCOPO; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* BAPFPKCFFII; // 0x40
		::System::Boolean JAOHHFDACFO; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 DDOKCIFEAFF; // 0x4C
		static ::System::Int32* StaticGet_EMGNDOOCJLL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DFFOLOMKDOC")->GetStaticField(0x14840);
		}

		static ::System::Single* StaticGet_CMLLDJAAFDF()
		{
			return (::System::Single*)UnitySDK::FromName("", "DFFOLOMKDOC")->GetStaticField(0x14844);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFFOLOMKDOC_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JHCMIEAGEFE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_JHCMIEAGEFE_OFFSET))(this, a1, a2);
		}

		::System::Void BLIPMBFBNDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_BLIPMBFBNDF_OFFSET))(this);
		}

		::System::Void GKIGAKCJIIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_GKIGAKCJIIF_OFFSET))(this);
		}

		::System::Void KNMJELOPHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_KNMJELOPHFE_OFFSET))(this);
		}

		::System::Void NNLDJLFIOEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_NNLDJLFIOEJ_OFFSET))(this);
		}

		::System::Void FOHNCNKHFID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_FOHNCNKHFID_OFFSET))(this);
		}

		::System::Void DDGGFMPIHNF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_DDGGFMPIHNF_OFFSET))(this, a1);
		}

		::System::Void CJBIJEEKKHL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_CJBIJEEKKHL_OFFSET))(this, a1);
		}

		::System::Void MIBNONCHJHD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_MIBNONCHJHD_OFFSET))(this, a1);
		}

		::System::Void JMKHEALECCC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_JMKHEALECCC_OFFSET))(this, a1);
		}

		::System::Void EIJNLLPIIHG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFFOLOMKDOC_EIJNLLPIIHG_OFFSET))(this, a1);
		}

	};
