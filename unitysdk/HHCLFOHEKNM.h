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

#define HHCLFOHEKNM_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0x15CADAA0)
#define HHCLFOHEKNM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CAEC40)
#define HHCLFOHEKNM_DOEOAIGJALE_OFFSET UNITYSDK_OFFSET(0x15CAEBF0)
#define HHCLFOHEKNM_EKJLNFJKNNB_OFFSET UNITYSDK_OFFSET(0x15CAEB50)
#define HHCLFOHEKNM_FFFIGPLJBMI_OFFSET UNITYSDK_OFFSET(0x15CAD7B0)
#define HHCLFOHEKNM_FKNOBCMLHAG_OFFSET UNITYSDK_OFFSET(0x15CAC7E0)
#define HHCLFOHEKNM_HHFDPNNLOBJ_OFFSET UNITYSDK_OFFSET(0x15CAEBA0)
#define HHCLFOHEKNM_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0x15CAD6D0)
#define HHCLFOHEKNM_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0x15CAC8B0)
#define HHCLFOHEKNM_JMFBLNEOHEB_OFFSET UNITYSDK_OFFSET(0x15CAE860)
#define HHCLFOHEKNM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CAC620)
#define HHCLFOHEKNM_LNLLMIPMLPL_OFFSET UNITYSDK_OFFSET(0x15CAC690)
#define HHCLFOHEKNM_LPCAMOJGABA_OFFSET UNITYSDK_OFFSET(0x15CAEB00)
#define HHCLFOHEKNM_MFAHFOEDLDL_OFFSET UNITYSDK_OFFSET(0x15CAC760)
#define HHCLFOHEKNM_MGODDGLJHLN_OFFSET UNITYSDK_OFFSET(0x15CACB00)
#define HHCLFOHEKNM_PAJNECIGPHO_OFFSET UNITYSDK_OFFSET(0x15CADB10)
#define HHCLFOHEKNM_PHGJENJNGDG_OFFSET UNITYSDK_OFFSET(0x15CACAB0)

inline static constexpr unsigned int HHCLFOHEKNM_TypeDefinitionIndex = 69965;

	class HHCLFOHEKNM : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* GJAGKCGIAMO; // 0x18
		::RPG::Client::MonoEffectPluginCharaPropCrystal* KHBLCKNKAJO; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>* JFOIGEBOCMP; // 0x28
		::RPG::Client::MonoEffectPluginCharaPropCustomLightDir* BHEAGHOFLMJ; // 0x30
		::RPG::Client::MonoEffectPluginCharaPropBloom* NAPPNNHMPFI; // 0x38
		::RPG::Client::MonoEffectPluginCharaPropDirectionDissolve* FMMHJNHJKEN; // 0x40
		::RPG::Client::MonoEffectPluginCharaPropRimShadow* MOIDIBEKMJO; // 0x48
		::RPG::Client::MonoEffectPluginCharaPropFaceDiffuse* GPGLBNIMJDA; // 0x50
		::RPG::Client::MonoEffectPluginCharaPropFaceRim* JGHGMEJKNKL; // 0x58
		::RPG::Client::MonoEffectPluginCharaPropFaceSpecialEye* INLGDPIJONG; // 0x60
		::RPG::Client::MonoEffectPluginCharaPropHairRimLight* KGNGIAGHFGA; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* KOJAKKFLPMG; // 0x70
		::RPG::Client::MonoEffectPluginCharaPropDissolve* BGHAGPKHKHA; // 0x78
		::RPG::Client::MonoEffectPluginCharaPropRefSpecular* LEIBKGCCGLL; // 0x80
		::RPG::Client::MonoEffectPluginCharaPropDiffuseLighting* KKEHHMIPBJK; // 0x88
		::RPG::Client::MonoEffectPluginCharaPropStencil* IOMKBACPFIN; // 0x90
		::RPG::Client::MonoEffectPluginCharaPropEmission* FLIHMCHOGFM; // 0x98
		::RPG::Client::MonoEffectPluginCharaPropOutline* CLOHICDEMLK; // 0xA0
		::RPG::Client::MonoEffectPluginCharaPropMaps* FLDIDKBGGJL; // 0xA8
		::RPG::Client::MonoEffectPluginCharaPropOverrideLight* MKDNAKGIAIF; // 0xB0
		::RPG::Client::MonoEffectPluginCharaPropSpecularLighting* ENBPIEHOMCE; // 0xB8
		::RPG::Client::MonoEffectPluginCharaPropStock* KGKJDIBMAAA; // 0xC0
		::RPG::Client::MonoEffectPluginCharaPropPartsSelection* OPFKKKJPCMK; // 0xC8
		::RPG::Client::MonoEffectPluginCharaPropRimLight* BCPBALACPCB; // 0xD0
		::RPG::Client::MonoEffectPluginCharaPropFaceOutline* BOOEBNLNKIL; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HKKGFJNLKHM; // 0xE0
		::RPG::Client::MonoEffectPluginCharaPropStarrySky* MFPAHIHICNH; // 0xE8
		::RPG::Client::MonoEffectPluginCharaPropFaceExpression* FIFEODGJIMJ; // 0xF0
		::HHCLFOHEKNM_HairProp HPOLEJPFNGM; // 0xF8
		::System::Boolean CHCABKIDJNO; // 0xFC
		::System::Boolean HJGGKOEAJEG; // 0xFD
		::System::Byte _padding0[0x2];
		::HHCLFOHEKNM_CharaProp IAKPKCEDIOO; // 0x100
		::HHCLFOHEKNM_FaceProp KEEHEAHBMPA; // 0x104
		::HHCLFOHEKNM_OtherProp DFJGLFEJEDJ; // 0x108
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
