#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJMFJKDEHJ.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JFLFABLJOCJ;
class PFJNGFLBJFO;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define EJOGFIGAEIA_AIEFPGLIJLF_OFFSET UNITYSDK_OFFSET(0x154E8030)
#define EJOGFIGAEIA_CEBOBIFBHPD_OFFSET UNITYSDK_OFFSET(0x154E8230)
#define EJOGFIGAEIA_CNBOPGLFKBP_OFFSET UNITYSDK_OFFSET(0x154E7180)
#define EJOGFIGAEIA_CTOR_OFFSET UNITYSDK_OFFSET(0x154E6A10)
#define EJOGFIGAEIA_EBKABGCKJHM_OFFSET UNITYSDK_OFFSET(0x154E7EA0)
#define EJOGFIGAEIA_INIT_OFFSET UNITYSDK_OFFSET(0x154E72D0)
#define EJOGFIGAEIA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154E7140)
#define EJOGFIGAEIA_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0x154E8430)
#define EJOGFIGAEIA_NKINAAPKLFP_OFFSET UNITYSDK_OFFSET(0x154E7F70)
#define EJOGFIGAEIA_NMOBNBJNEFF_OFFSET UNITYSDK_OFFSET(0x154E6CE0)
#define EJOGFIGAEIA_OAMHNGPKLEP_OFFSET UNITYSDK_OFFSET(0x154E6A70)
#define EJOGFIGAEIA_ODPCOAJLFNK_OFFSET UNITYSDK_OFFSET(0x154E7FD0)
#define EJOGFIGAEIA_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x154E7F20)
#define EJOGFIGAEIA_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x154E6BB0)
#define EJOGFIGAEIA_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x154E6C00)
#define EJOGFIGAEIA_ONFADING_OFFSET UNITYSDK_OFFSET(0x154E6AC0)
#define EJOGFIGAEIA_RELEASE_OFFSET UNITYSDK_OFFSET(0x154E7230)

inline static constexpr unsigned int EJOGFIGAEIA_TypeDefinitionIndex = 49306;

	class EJOGFIGAEIA : public ::IEJMFJKDEHJ
	{
	public:
		::PFJNGFLBJFO* FPBGAODKGNN; // 0x28
		::Il2CppArray<::JFLFABLJOCJ*>* IBPHBAMGKIE; // 0x30
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OAMHNGPKLEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_OAMHNGPKLEP_OFFSET))(this, a1);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void NMOBNBJNEFF(::SceneLightVolume* a1, ::PFJNGFLBJFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::PFJNGFLBJFO*))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_NMOBNBJNEFF_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void CNBOPGLFKBP(::PFJNGFLBJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJNGFLBJFO*))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_CNBOPGLFKBP_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnvObjEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_ONENVOBJENABLE_OFFSET))(this, a1);
		}

		::PFJNGFLBJFO* EBKABGCKJHM()
		{
			return ((::PFJNGFLBJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_EBKABGCKJHM_OFFSET))(this);
		}

		::UnityEngine::Light* NKINAAPKLFP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_NKINAAPKLFP_OFFSET))(this, a1);
		}

		::UnityEngine::Light* ODPCOAJLFNK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_ODPCOAJLFNK_OFFSET))(this, a1);
		}

		::UnityEngine::Light* AIEFPGLIJLF(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_AIEFPGLIJLF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* CEBOBIFBHPD(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_CEBOBIFBHPD_OFFSET))(this, a1, a2);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOGFIGAEIA_KDCBKBJKGOP_OFFSET))(this);
		}

	};
