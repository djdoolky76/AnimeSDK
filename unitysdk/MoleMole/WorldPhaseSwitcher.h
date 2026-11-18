#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/WorldPhaseSwitcher_OHEDAJKMLHO.h"
#include "unitysdk/MonoOverlaySpaceSceneObjectProxy_TargetState.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoOverlaySpaceSceneObjectProxy;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_WORLDPHASESWITCHER_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16725F60)
#define MOLEMOLE_WORLDPHASESWITCHER_APPLY_OFFSET UNITYSDK_OFFSET(0x167260B0)
#define MOLEMOLE_WORLDPHASESWITCHER_CCNEKEEPOBA_OFFSET UNITYSDK_OFFSET(0x167274B0)
#define MOLEMOLE_WORLDPHASESWITCHER_DIPHFIHEDOI_OFFSET UNITYSDK_OFFSET(0x17266FD0)
#define MOLEMOLE_WORLDPHASESWITCHER_ECGOPAHLFLH_OFFSET UNITYSDK_OFFSET(0x172674B0)
#define MOLEMOLE_WORLDPHASESWITCHER_GET_BIAOWORLDPRIMARY_OFFSET UNITYSDK_OFFSET(0x16725870)
#define MOLEMOLE_WORLDPHASESWITCHER_GET_OVERLAYON_OFFSET UNITYSDK_OFFSET(0x16725880)
#define MOLEMOLE_WORLDPHASESWITCHER_HMFADEELOLN_OFFSET UNITYSDK_OFFSET(0x16727530)
#define MOLEMOLE_WORLDPHASESWITCHER_IGEDJOBJACJ_OFFSET UNITYSDK_OFFSET(0x17267270)
#define MOLEMOLE_WORLDPHASESWITCHER_IGPGIAGKGHF_OFFSET UNITYSDK_OFFSET(0x17267310)
#define MOLEMOLE_WORLDPHASESWITCHER_JLPABKCGJKI_OFFSET UNITYSDK_OFFSET(0x17267280)
#define MOLEMOLE_WORLDPHASESWITCHER_LANBPCNCDIP_OFFSET UNITYSDK_OFFSET(0x16727420)
#define MOLEMOLE_WORLDPHASESWITCHER_LKBAKBBHPED_OFFSET UNITYSDK_OFFSET(0x17267050)
#define MOLEMOLE_WORLDPHASESWITCHER_LLGJEEIJNJL_OFFSET UNITYSDK_OFFSET(0x167272C0)
#define MOLEMOLE_WORLDPHASESWITCHER_MFCJIMPHAEO_OFFSET UNITYSDK_OFFSET(0x16726A50)
#define MOLEMOLE_WORLDPHASESWITCHER_MMJIBKFMDFL_OFFSET UNITYSDK_OFFSET(0x167263D0)
#define MOLEMOLE_WORLDPHASESWITCHER_NGDDKNHBNEC_OFFSET UNITYSDK_OFFSET(0x17266FC0)
#define MOLEMOLE_WORLDPHASESWITCHER_NMNHHEHPOHP_OFFSET UNITYSDK_OFFSET(0x16726C10)
#define MOLEMOLE_WORLDPHASESWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16725D70)
#define MOLEMOLE_WORLDPHASESWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16725890)
#define MOLEMOLE_WORLDPHASESWITCHER_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16725FE0)
#define MOLEMOLE_WORLDPHASESWITCHER_SWITCHOVERLAY_OFFSET UNITYSDK_OFFSET(0x16726380)
#define MOLEMOLE_WORLDPHASESWITCHER_SWITCHVISIBILITY_1_OFFSET UNITYSDK_OFFSET(0x16725CF0)
#define MOLEMOLE_WORLDPHASESWITCHER_SWITCHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16726060)
#define MOLEMOLE_WORLDPHASESWITCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16727360)
#define MOLEMOLE_WORLDPHASESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x16727300)

namespace MoleMole
{
	inline static constexpr unsigned int WorldPhaseSwitcher_TypeDefinitionIndex = 88532;

	class WorldPhaseSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_NINHHFDALDJ()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(WorldPhaseSwitcher_TypeDefinitionIndex)->GetStaticField(0x4DB20);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::ShadowCastingMode>** StaticGet_FIBHKNCOFKK()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::ShadowCastingMode>**)Il2CppClass::FromTypeDefinitionIndex(WorldPhaseSwitcher_TypeDefinitionIndex)->GetStaticField(0x4DB28);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_FHMDMPNEDDI()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(WorldPhaseSwitcher_TypeDefinitionIndex)->GetStaticField(0x4DB30);
		}
		static ::System::Int32* StaticGet_PBJCGHKHKPC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldPhaseSwitcher_TypeDefinitionIndex)->GetStaticField(0x12490);
		}
		static ::System::Int32* StaticGet_FICHLIJBBFG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WorldPhaseSwitcher_TypeDefinitionIndex)->GetStaticField(0x12494);
		}
		// static const ::System::UInt32 DGELLHBJHAJ = 0x1; // 0x0
		// static const ::System::UInt32 NHAOKAOHCMI = 0x2; // 0x0
		// static const ::System::UInt32 FHKOELGADFH = 0x200; // 0x0
		// static const ::System::String* GMJBGGHPNKN; // 0x0
		::Il2CppArray<::UnityEngine::GameObject*>* innerWorldRoots; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* outerWorldRoots; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* innerFxObjects; // 0x28
		::Il2CppArray<::UnityEngine::GameObject*>* outerFxObjects; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* overlayFxBiaoLeftObjects; // 0x38
		::Il2CppArray<::UnityEngine::GameObject*>* overlayFxLiLeftObjects; // 0x40
		::Il2CppArray<::MonoOverlaySpaceSceneObjectProxy*>* innerProxies; // 0x48
		::Il2CppArray<::MonoOverlaySpaceSceneObjectProxy*>* outerProxies; // 0x50
		::System::Boolean planeClipPartition; // 0x58
		::System::Byte _padding0[0x3];
		::MonoOverlaySpaceSceneObjectProxy_TargetState baseOverlayState; // 0x5C
		::System::String* Key; // 0x60
		::System::Boolean _ENOJEJJNGJG_k__BackingField; // 0x68
		::System::Boolean _NDFEBKNMCJH_k__BackingField; // 0x69
		::System::Byte _padding1[0x6];
		::System::Action* CHPMFIIBNAC; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER__CCTOR_OFFSET))();
		}

		::System::Boolean get_BiaoWorldPrimary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_GET_BIAOWORLDPRIMARY_OFFSET))(this);
		}

		::System::Boolean get_OverlayOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_GET_OVERLAYON_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_ONDISABLE_OFFSET))(this);
		}

		::System::Void add_OnStateChanged(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_ADD_ONSTATECHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_OnStateChanged(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_REMOVE_ONSTATECHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void SwitchVisibility(::System::Boolean LNKMKGPIOAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_SWITCHVISIBILITY_OFFSET))(this, LNKMKGPIOAE);
		}

		::System::Void SwitchVisibility_1(::System::Int32 DJLGBBLKOFI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_SWITCHVISIBILITY_1_OFFSET))(this, DJLGBBLKOFI);
		}

		::System::Void SwitchOverlay(::System::Boolean MJBPKEKFBEF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_SWITCHOVERLAY_OFFSET))(this, MJBPKEKFBEF);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_APPLY_OFFSET))(this);
		}

		::System::Void LLGJEEIJNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_LLGJEEIJNJL_OFFSET))(this);
		}

		static ::System::Void MMJIBKFMDFL(::Il2CppArray<::UnityEngine::GameObject*>* NIGDMPCPILP, ::System::UInt32 LBPIPEAKPDG, ::System::Boolean FPKDIAJOIPH)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_MMJIBKFMDFL_OFFSET))(NIGDMPCPILP, LBPIPEAKPDG, FPKDIAJOIPH);
		}

		static ::System::Void MFCJIMPHAEO(::Il2CppArray<::UnityEngine::GameObject*>* ELOPADOGLDH, ::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_MFCJIMPHAEO_OFFSET))(ELOPADOGLDH, FIPHFGHNNBE);
		}

		::System::Void LANBPCNCDIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_LANBPCNCDIP_OFFSET))(this);
		}

		::System::Void CCNEKEEPOBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_CCNEKEEPOBA_OFFSET))(this);
		}

		::System::Void HMFADEELOLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_HMFADEELOLN_OFFSET))(this);
		}

		static ::System::Void NMNHHEHPOHP(::Il2CppArray<::UnityEngine::GameObject*>* NIGDMPCPILP, ::MoleMole::WorldPhaseSwitcher_OHEDAJKMLHO AGNHAMCEBOD)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::MoleMole::WorldPhaseSwitcher_OHEDAJKMLHO))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_NMNHHEHPOHP_OFFSET))(NIGDMPCPILP, AGNHAMCEBOD);
		}

		::System::Void NGDDKNHBNEC(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_NGDDKNHBNEC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DIPHFIHEDOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_DIPHFIHEDOI_OFFSET))(this);
		}

		static ::System::Void LKBAKBBHPED(::System::Boolean BDGNJNDGIIA)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_LKBAKBBHPED_OFFSET))(BDGNJNDGIIA);
		}

		::System::Void IGEDJOBJACJ(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_IGEDJOBJACJ_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void JLPABKCGJKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_JLPABKCGJKI_OFFSET))(this);
		}

		static ::System::Void IGPGIAGKGHF(::Il2CppArray<::MonoOverlaySpaceSceneObjectProxy*>* PPIOHHEBHJD, ::MonoOverlaySpaceSceneObjectProxy_TargetState JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::Il2CppArray<::MonoOverlaySpaceSceneObjectProxy*>*, ::MonoOverlaySpaceSceneObjectProxy_TargetState))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_IGPGIAGKGHF_OFFSET))(PPIOHHEBHJD, JKBLDFBGBPK);
		}

		::System::Void ECGOPAHLFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLDPHASESWITCHER_ECGOPAHLFLH_OFFSET))(this);
		}
	};
}
