#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_BOJKIMLHJOO_OFFSET UNITYSDK_OFFSET(0x119039B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET UNITYSDK_OFFSET(0x11902280)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_FKFBKAOIBHP_OFFSET UNITYSDK_OFFSET(0x11903800)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_GCPLFNDMHAO_OFFSET UNITYSDK_OFFSET(0x11903830)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_GOEPAGKOHNI_OFFSET UNITYSDK_OFFSET(0x11901AA0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_HJFJLKNCHCB_OFFSET UNITYSDK_OFFSET(0x11903920)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x119029E0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_JCBFLKNNEJP_OFFSET UNITYSDK_OFFSET(0x119038F0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KKGLDGPHLNF_OFFSET UNITYSDK_OFFSET(0x11903950)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KLDFCFCEGBP_OFFSET UNITYSDK_OFFSET(0x11903860)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KNFAEFJIKLO_OFFSET UNITYSDK_OFFSET(0x11902A30)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_LBHNOFAOCKE_OFFSET UNITYSDK_OFFSET(0x11900B80)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_LELPCPOGICN_OFFSET UNITYSDK_OFFSET(0x11901730)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_MCPHAPCHKFC_OFFSET UNITYSDK_OFFSET(0x11903890)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_NELEHMEMKPP_OFFSET UNITYSDK_OFFSET(0x119038C0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_NJENMGDKPML_OFFSET UNITYSDK_OFFSET(0x11903980)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11901E10)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x119016E0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11900B30)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET UNITYSDK_OFFSET(0x11901E60)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x119026B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x119035B0)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyeInteractableRenderer_TypeDefinitionIndex = 82668;

	class EtherEyeInteractableRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_LPMKCIHIKOM()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x516E0);
		}
		static ::UnityEngine::Material** StaticGet_BHEIJMNJAHL()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x516E8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_FMMONJLPBCK()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x516F0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_ILHPMAPLAPP()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x51710);
		}
		// static const ::System::String* PJNJFACFJHP; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SurfaceObject; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* HAIJEIMBFGH; // 0x28
		::UnityEngine::Material* tempMat; // 0x30
		::UnityEngine::Material* SurfaceTempMat; // 0x38
		::System::Single FHFNKECFJJN; // 0x40
		::System::Single JHGEILKCEJA; // 0x44
		::System::Single openTransitionTime; // 0x48
		::System::Single closeTransitionTime; // 0x4C
		::System::Single triggerTransitionTime; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* openCurve; // 0x58
		::UnityEngine::AnimationCurve* closeCurve; // 0x60
		::UnityEngine::AnimationCurve* triggerCurve; // 0x68
		::MoleMole::Config::EtherEyesObjectSize testObjectSize; // 0x70
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>* LNPNHBHCGKA; // 0x78
		::System::Int32 DMCFIJLECBJ; // 0x80
		::System::Int32 KBDFOMFPKNK; // 0x84
		::System::Int32 KEBLLOMIKPA; // 0x88
		::System::Int32 KCLMGOEHCBN; // 0x8C
		::System::Int32 FKEBMGNBBLG; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OpenVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET))(this);
		}

		::System::Void CloseVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET))(this);
		}

		::System::Void TriggerInteract(::System::Boolean NFLGOADHPJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET))(this, NFLGOADHPJE);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET))(this);
		}

		::System::Single FKFBKAOIBHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_FKFBKAOIBHP_OFFSET))(this);
		}

		::System::Void GCPLFNDMHAO(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_GCPLFNDMHAO_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Void LBHNOFAOCKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_LBHNOFAOCKE_OFFSET))(this);
		}

		::System::Void KLDFCFCEGBP(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KLDFCFCEGBP_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Void MCPHAPCHKFC(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_MCPHAPCHKFC_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Single NELEHMEMKPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_NELEHMEMKPP_OFFSET))(this);
		}

		::System::Void JCBFLKNNEJP(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_JCBFLKNNEJP_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Void GOEPAGKOHNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_GOEPAGKOHNI_OFFSET))(this);
		}

		::System::Single HJFJLKNCHCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_HJFJLKNCHCB_OFFSET))(this);
		}

		::System::Void KNFAEFJIKLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KNFAEFJIKLO_OFFSET))(this);
		}

		::System::Void KKGLDGPHLNF(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_KKGLDGPHLNF_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Single NJENMGDKPML()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_NJENMGDKPML_OFFSET))(this);
		}

		::System::Void LELPCPOGICN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_LELPCPOGICN_OFFSET))(this);
		}

		::System::Single BOJKIMLHJOO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_BOJKIMLHJOO_OFFSET))(this);
		}
	};
}
