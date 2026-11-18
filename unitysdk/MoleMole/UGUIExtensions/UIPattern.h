#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UI/SharedUnityObjectResource_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_AWAKE_OFFSET UNITYSDK_OFFSET(0x162FDD60)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_DJDFLPPNCCH_OFFSET UNITYSDK_OFFSET(0x162FEF50)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_FLGGPNDJAMA_OFFSET UNITYSDK_OFFSET(0x162FF220)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_FNPJJIBJLGA_OFFSET UNITYSDK_OFFSET(0x162FF070)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x162FE850)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x162FE610)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GLHGKPIGJLJ_OFFSET UNITYSDK_OFFSET(0x162FF100)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x162FEE30)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x162FEEC0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x162FDA20)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_JFIOGGEDFHB_OFFSET UNITYSDK_OFFSET(0x162FEFE0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x162FE810)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_OFOBKCNGAHF_OFFSET UNITYSDK_OFFSET(0x162FF190)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x162FE290)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x162FE320)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162FE3B0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x162FE200)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x162FE0E0)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x162FE170)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CCTOR_OFFSET UNITYSDK_OFFSET(0x162FEB80)
#define MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x162FEB10)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int UIPattern_TypeDefinitionIndex = 41176;

	class UIPattern : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>* StaticGet_PMLAAPKHHBJ()
		{
			return (::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x46D30);
		}
		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>** StaticGet_GFBLPMFMHCK()
		{
			return (::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x46D68);
		}
		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>** StaticGet_COCKLAAGHMA()
		{
			return (::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x46D70);
		}
		static ::System::Int32* StaticGet_MOJDFCPJNHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10610);
		}
		static ::System::Int32* StaticGet_INOILEPJMLI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10614);
		}
		static ::System::Int32* StaticGet_MMHAHEDPKHM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10618);
		}
		static ::System::Int32* StaticGet_MBLIIGFJHJD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x1061C);
		}
		static ::System::Int32* StaticGet_GAOCDNPHDCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10620);
		}
		static ::System::Int32* StaticGet_CBJBIDGCHKH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10624);
		}
		static ::System::Int32* StaticGet_CNABPPNCFJL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPattern_TypeDefinitionIndex)->GetStaticField(0x10628);
		}
		// static const ::System::String* AOBGAKIPAAG; // 0x0
		// static const ::System::String* DCLFGPKGOKN; // 0x0
		// static const ::System::String* NJJAAELLOEE; // 0x0
		::UnityEngine::Sprite* Pattern; // 0x18
		::UnityEngine::Color PatternColor; // 0x20
		::System::Single PatternTiling; // 0x30
		::System::Single PatternSize; // 0x34
		::System::Single Interlace; // 0x38
		::System::Boolean CircleMask; // 0x3C
		::System::Boolean KeepPatternComplete; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 ImageMode; // 0x40
		::System::Int32 BlendMode; // 0x44
		::UnityEngine::Material* AOJKEPNHFCM; // 0x48
		::UnityEngine::RectTransform* IENPIOEEOLI; // 0x50
		::UnityEngine::UI::MaskableGraphic* EBCFCJEINDE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ISACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_AWAKE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIAL_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GETMODIFIEDMATERIALPOST_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void DJDFLPPNCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_DJDFLPPNCCH_OFFSET))(this);
		}

		::System::Void JFIOGGEDFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_JFIOGGEDFHB_OFFSET))(this);
		}

		::System::Void FNPJJIBJLGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_FNPJJIBJLGA_OFFSET))(this);
		}

		::System::Void GLHGKPIGJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_GLHGKPIGJLJ_OFFSET))(this);
		}

		::System::Void OFOBKCNGAHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_OFOBKCNGAHF_OFFSET))(this);
		}

		::System::Boolean FLGGPNDJAMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIPATTERN_FLGGPNDJAMA_OFFSET))(this);
		}
	};
}
