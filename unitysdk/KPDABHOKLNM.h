#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKLKMMEEHH.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Color.h"
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define KPDABHOKLNM_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE072D0)
#define KPDABHOKLNM_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xBE06A30)
#define KPDABHOKLNM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE072C0)
#define KPDABHOKLNM_EKDDDCJHOKJ_OFFSET UNITYSDK_OFFSET(0xBE05920)
#define KPDABHOKLNM_GBHABBKFLLB_OFFSET UNITYSDK_OFFSET(0xBE05A30)
#define KPDABHOKLNM_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xBE06CF0)
#define KPDABHOKLNM_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0xBE058E0)
#define KPDABHOKLNM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE053C0)
#define KPDABHOKLNM_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xBE069D0)
#define KPDABHOKLNM_ODFKNPGMJLF_OFFSET UNITYSDK_OFFSET(0xBE056D0)
#define KPDABHOKLNM_OHADLECLLBC_OFFSET UNITYSDK_OFFSET(0xBE060A0)
#define KPDABHOKLNM_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBE06FE0)
#define KPDABHOKLNM_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBE07030)
#define KPDABHOKLNM_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xBE070C0)
#define KPDABHOKLNM_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBE06F30)
#define KPDABHOKLNM_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xBE06EF0)
#define KPDABHOKLNM_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xBE06700)
#define KPDABHOKLNM_TICK_OFFSET UNITYSDK_OFFSET(0xBE06AE0)
#define KPDABHOKLNM_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xBE06D40)

inline static constexpr unsigned int KPDABHOKLNM_TypeDefinitionIndex = 72767;

	class KPDABHOKLNM : public ::ADKLKMMEEHH
	{
	public:
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x48
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x50
		::UnityEngine::MeshFilter* FNDMMIEAEHF; // 0x58
		::UnityEngine::Material* GGPCNBKCPDF; // 0x60
		::UnityEngine::Mesh* BCHHLPKOMCK; // 0x68
		::UnityEngine::Color AFBLDLHBDDM; // 0x70
		static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_AJDNIEDBIBP()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)UnitySDK::FromName("", "KPDABHOKLNM")->GetStaticField(0x5E800);
		}

		static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_DHLANOMILKH()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)UnitySDK::FromName("", "KPDABHOKLNM")->GetStaticField(0x5E808);
		}

		static ::UnityEngine::Material** StaticGet_FNPPGFLOBDE()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "KPDABHOKLNM")->GetStaticField(0x5E810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDABHOKLNM_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EKDDDCJHOKJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KPDABHOKLNM_EKDDDCJHOKJ_OFFSET))(this, a1, a2);
		}

		::System::Void ODFKNPGMJLF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ODFKNPGMJLF_OFFSET))(this, a1);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPDABHOKLNM_TICK_OFFSET))(this, a1);
		}

		::System::Void OHADLECLLBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_OHADLECLLBC_OFFSET))(this);
		}

		::UnityEngine::Mesh* GBHABBKFLLB(::System::Single a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPDABHOKLNM_GBHABBKFLLB_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_GETTYPEID_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + KPDABHOKLNM_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_ONOBJECTENABLE_OFFSET))(this);
		}

		::RPG::Client::LineGlowLightMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::LineGlowLightMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDABHOKLNM_JJINILFDJOF_OFFSET))(this);
		}

	};
