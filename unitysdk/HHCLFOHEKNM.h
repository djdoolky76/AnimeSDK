#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHCLFOHEKNM_CharaProp.h"
#include "unitysdk/HHCLFOHEKNM_FaceProp.h"
#include "unitysdk/HHCLFOHEKNM_HairProp.h"
#include "unitysdk/HHCLFOHEKNM_OtherProp.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class DEBEAKKOHLN;
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginCharaPropBloom; }
namespace RPG::Client { class MonoEffectPluginCharaPropCrystal; }
namespace RPG::Client { class MonoEffectPluginCharaPropCustomLightDir; }
namespace RPG::Client { class MonoEffectPluginCharaPropDiffuseLighting; }
namespace RPG::Client { class MonoEffectPluginCharaPropDirectionDissolve; }
namespace RPG::Client { class MonoEffectPluginCharaPropDissolve; }
namespace RPG::Client { class MonoEffectPluginCharaPropEmission; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceDiffuse; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceExpression; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceOutline; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceRim; }
namespace RPG::Client { class MonoEffectPluginCharaPropFaceSpecialEye; }
namespace RPG::Client { class MonoEffectPluginCharaPropHairRimLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropManager; }
namespace RPG::Client { class MonoEffectPluginCharaPropMaps; }
namespace RPG::Client { class MonoEffectPluginCharaPropOutline; }
namespace RPG::Client { class MonoEffectPluginCharaPropOverlayManager; }
namespace RPG::Client { class MonoEffectPluginCharaPropOverrideLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropPartsSelection; }
namespace RPG::Client { class MonoEffectPluginCharaPropRefSpecular; }
namespace RPG::Client { class MonoEffectPluginCharaPropRimLight; }
namespace RPG::Client { class MonoEffectPluginCharaPropRimShadow; }
namespace RPG::Client { class MonoEffectPluginCharaPropSpecularLighting; }
namespace RPG::Client { class MonoEffectPluginCharaPropStarrySky; }
namespace RPG::Client { class MonoEffectPluginCharaPropStencil; }
namespace RPG::Client { class MonoEffectPluginCharaPropStock; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define HHCLFOHEKNM_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0x15CBA4E0)
#define HHCLFOHEKNM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBB690)
#define HHCLFOHEKNM_DOEOAIGJALE_OFFSET UNITYSDK_OFFSET(0x15CBB640)
#define HHCLFOHEKNM_EKJLNFJKNNB_OFFSET UNITYSDK_OFFSET(0x15CBB5A0)
#define HHCLFOHEKNM_FFFIGPLJBMI_OFFSET UNITYSDK_OFFSET(0x15CBA200)
#define HHCLFOHEKNM_FKNOBCMLHAG_OFFSET UNITYSDK_OFFSET(0x15CB9230)
#define HHCLFOHEKNM_HHFDPNNLOBJ_OFFSET UNITYSDK_OFFSET(0x15CBB5F0)
#define HHCLFOHEKNM_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0x15CBA120)
#define HHCLFOHEKNM_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0x15CB9300)
#define HHCLFOHEKNM_JMFBLNEOHEB_OFFSET UNITYSDK_OFFSET(0x15CBB2B0)
#define HHCLFOHEKNM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CB9070)
#define HHCLFOHEKNM_LNLLMIPMLPL_OFFSET UNITYSDK_OFFSET(0x15CB90E0)
#define HHCLFOHEKNM_LPCAMOJGABA_OFFSET UNITYSDK_OFFSET(0x15CBB550)
#define HHCLFOHEKNM_MFAHFOEDLDL_OFFSET UNITYSDK_OFFSET(0x15CB91B0)
#define HHCLFOHEKNM_MGODDGLJHLN_OFFSET UNITYSDK_OFFSET(0x15CB9550)
#define HHCLFOHEKNM_PAJNECIGPHO_OFFSET UNITYSDK_OFFSET(0x15CBA560)
#define HHCLFOHEKNM_PHGJENJNGDG_OFFSET UNITYSDK_OFFSET(0x15CB9500)

	class HHCLFOHEKNM : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::MonoEffectPluginCharaPropSpecularLighting* ENBPIEHOMCE; // 0x18
		::RPG::Client::MonoEffectPluginCharaPropStock* KGKJDIBMAAA; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* GJAGKCGIAMO; // 0x28
		::RPG::Client::MonoEffectPluginCharaPropCustomLightDir* BHEAGHOFLMJ; // 0x30
		::RPG::Client::MonoEffectPluginCharaPropDiffuseLighting* KKEHHMIPBJK; // 0x38
		::RPG::Client::MonoEffectPluginCharaPropFaceRim* JGHGMEJKNKL; // 0x40
		::RPG::Client::MonoEffectPluginCharaPropDissolve* BGHAGPKHKHA; // 0x48
		::RPG::Client::MonoEffectPluginCharaPropRefSpecular* LEIBKGCCGLL; // 0x50
		::RPG::Client::MonoEffectPluginCharaPropRimLight* BCPBALACPCB; // 0x58
		::RPG::Client::MonoEffectPluginCharaPropFaceExpression* FIFEODGJIMJ; // 0x60
		::RPG::Client::MonoEffectPluginCharaPropBloom* NAPPNNHMPFI; // 0x68
		::RPG::Client::MonoEffectPluginCharaPropMaps* FLDIDKBGGJL; // 0x70
		::RPG::Client::MonoEffectPluginCharaPropDirectionDissolve* FMMHJNHJKEN; // 0x78
		::RPG::Client::MonoEffectPluginCharaPropHairRimLight* KGNGIAGHFGA; // 0x80
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>* JFOIGEBOCMP; // 0x88
		::RPG::Client::MonoEffectPluginCharaPropFaceDiffuse* GPGLBNIMJDA; // 0x90
		::RPG::Client::MonoEffectPluginCharaPropOutline* CLOHICDEMLK; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HKKGFJNLKHM; // 0xA0
		::RPG::Client::MonoEffectPluginCharaPropStencil* IOMKBACPFIN; // 0xA8
		::RPG::Client::MonoEffectPluginCharaPropOverrideLight* MKDNAKGIAIF; // 0xB0
		::RPG::Client::MonoEffectPluginCharaPropEmission* FLIHMCHOGFM; // 0xB8
		::RPG::Client::MonoEffectPluginCharaPropRimShadow* MOIDIBEKMJO; // 0xC0
		::RPG::Client::MonoEffectPluginCharaPropPartsSelection* OPFKKKJPCMK; // 0xC8
		::RPG::Client::MonoEffectPluginCharaPropFaceSpecialEye* INLGDPIJONG; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* KOJAKKFLPMG; // 0xD8
		::RPG::Client::MonoEffectPluginCharaPropStarrySky* MFPAHIHICNH; // 0xE0
		::RPG::Client::MonoEffectPluginCharaPropFaceOutline* BOOEBNLNKIL; // 0xE8
		::RPG::Client::MonoEffectPluginCharaPropCrystal* KHBLCKNKAJO; // 0xF0
		::HHCLFOHEKNM_HairProp HPOLEJPFNGM; // 0xF8
		::HHCLFOHEKNM_OtherProp DFJGLFEJEDJ; // 0xFC
		::HHCLFOHEKNM_CharaProp IAKPKCEDIOO; // 0x100
		::HHCLFOHEKNM_FaceProp KEEHEAHBMPA; // 0x104
		::System::Boolean CHCABKIDJNO; // 0x108
		::System::Boolean HJGGKOEAJEG; // 0x109
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LNLLMIPMLPL(::RPG::Client::MonoEffectPluginCharaPropManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaPropManager*))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_LNLLMIPMLPL_OFFSET))(this, a1);
		}

		::System::Void FKNOBCMLHAG(::RPG::Client::MonoEffectPluginCharaPropOverlayManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaPropOverlayManager*))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_FKNOBCMLHAG_OFFSET))(this, a1);
		}

		::System::Void IJICJDNHKHN(::DEBEAKKOHLN* a1, ::System::Object* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_IJICJDNHKHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFOEAAAKONL(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::HHCLFOHEKNM_CharaProp a2, ::HHCLFOHEKNM_FaceProp a3, ::HHCLFOHEKNM_HairProp a4, ::HHCLFOHEKNM_OtherProp a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::HHCLFOHEKNM_CharaProp, ::HHCLFOHEKNM_FaceProp, ::HHCLFOHEKNM_HairProp, ::HHCLFOHEKNM_OtherProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_IFOEAAAKONL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_CBKPMHCOCMH_OFFSET))(this);
		}

		::System::Void MGODDGLJHLN(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_MGODDGLJHLN_OFFSET))(this, a1, a2);
		}

		::System::Void FFFIGPLJBMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_FFFIGPLJBMI_OFFSET))(this);
		}

		::System::Void PAJNECIGPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_PAJNECIGPHO_OFFSET))(this);
		}

		::System::Void MFAHFOEDLDL(::HHCLFOHEKNM_CharaProp a1, ::HHCLFOHEKNM_FaceProp a2, ::HHCLFOHEKNM_HairProp a3, ::HHCLFOHEKNM_OtherProp a4)
		{
			return ((::System::Void(*)(::PVOID, ::HHCLFOHEKNM_CharaProp, ::HHCLFOHEKNM_FaceProp, ::HHCLFOHEKNM_HairProp, ::HHCLFOHEKNM_OtherProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_MFAHFOEDLDL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JMFBLNEOHEB()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_JMFBLNEOHEB_OFFSET))(this);
		}

		::System::Void LPCAMOJGABA(::HHCLFOHEKNM_CharaProp a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCLFOHEKNM_CharaProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_LPCAMOJGABA_OFFSET))(this, a1);
		}

		::System::Void EKJLNFJKNNB(::HHCLFOHEKNM_FaceProp a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCLFOHEKNM_FaceProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_EKJLNFJKNNB_OFFSET))(this, a1);
		}

		::System::Void HHFDPNNLOBJ(::HHCLFOHEKNM_HairProp a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCLFOHEKNM_HairProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_HHFDPNNLOBJ_OFFSET))(this, a1);
		}

		::System::Void DOEOAIGJALE(::HHCLFOHEKNM_OtherProp a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCLFOHEKNM_OtherProp))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_DOEOAIGJALE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* PHGJENJNGDG()
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCLFOHEKNM_PHGJENJNGDG_OFFSET))(this);
		}

	};
