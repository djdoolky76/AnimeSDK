#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_DJDFLPPNCCH_OFFSET UNITYSDK_OFFSET(0x12B95580)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_FNPJJIBJLGA_OFFSET UNITYSDK_OFFSET(0x12B95620)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x12B94E60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x12B94AC0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR1_OFFSET UNITYSDK_OFFSET(0x12B93770)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR2_OFFSET UNITYSDK_OFFSET(0x12B93900)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR3_OFFSET UNITYSDK_OFFSET(0x12B93A90)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR4_OFFSET UNITYSDK_OFFSET(0x12B93C20)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT1_OFFSET UNITYSDK_OFFSET(0x12B936B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT2_OFFSET UNITYSDK_OFFSET(0x12B93840)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT3_OFFSET UNITYSDK_OFFSET(0x12B939D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT4_OFFSET UNITYSDK_OFFSET(0x12B93B60)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GLHGKPIGJLJ_OFFSET UNITYSDK_OFFSET(0x12B95460)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x12B95590)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x12B95450)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_JFIOGGEDFHB_OFFSET UNITYSDK_OFFSET(0x12B956B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12B95440)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x12B94E20)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x12B94750)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x12B954F0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x12B94670)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B94140)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12B945C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B940D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B94060)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x12B94400)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x12B944E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x12B93DC0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR1_OFFSET UNITYSDK_OFFSET(0x12B93780)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR2_OFFSET UNITYSDK_OFFSET(0x12B93910)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR3_OFFSET UNITYSDK_OFFSET(0x12B93AA0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR4_OFFSET UNITYSDK_OFFSET(0x12B93C30)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x12B93CF0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT1_OFFSET UNITYSDK_OFFSET(0x12B936C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT2_OFFSET UNITYSDK_OFFSET(0x12B93850)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT3_OFFSET UNITYSDK_OFFSET(0x12B939E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT4_OFFSET UNITYSDK_OFFSET(0x12B93B70)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_USINGUV_OFFSET UNITYSDK_OFFSET(0x12B93630)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_START_OFFSET UNITYSDK_OFFSET(0x12B93E40)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B951D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B950C0)

namespace Code::Logic::UI::UGUIExtensions
{
	inline static constexpr unsigned int UI4ColorGradient_TypeDefinitionIndex = 46229;

	class UI4ColorGradient : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_UVSet()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x45DD0);
		}
		static ::System::Collections::IEnumerable** StaticGet_BlendModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x45DD8);
		}
		static ::System::Int32* StaticGet_DAJAJPBBIMC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10220);
		}
		static ::System::Int32* StaticGet_PFAPAMHDLGK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10224);
		}
		static ::System::Int32* StaticGet_MIJDFKPJMJA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10228);
		}
		static ::System::Int32* StaticGet_GAOCDNPHDCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x1022C);
		}
		static ::System::Int32* StaticGet_GONCFGOOKFB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10230);
		}
		static ::System::Int32* StaticGet_LBJIBFCFMPF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10234);
		}
		static ::System::Int32* StaticGet_KCECHBNEALN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10238);
		}
		static ::System::Int32* StaticGet_FHAMBJFPCLH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x1023C);
		}
		static ::System::Int32* StaticGet_POICFFLLFHG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10240);
		}
		static ::System::Int32* StaticGet_AECBDCOAGDM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI4ColorGradient_TypeDefinitionIndex)->GetStaticField(0x10244);
		}
		// static const ::System::String* MGHKFIBFFEM; // 0x0
		::System::Int32 usingUV; // 0x20
		::UnityEngine::Vector2 point1; // 0x24
		::UnityEngine::Color color1; // 0x2C
		::UnityEngine::Vector2 point2; // 0x3C
		::UnityEngine::Color color2; // 0x44
		::UnityEngine::Vector2 point3; // 0x54
		::UnityEngine::Color color3; // 0x5C
		::UnityEngine::Vector2 point4; // 0x6C
		::UnityEngine::Color color4; // 0x74
		::System::Single opacity; // 0x84
		::System::Int32 blendMode; // 0x88
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* OBLEMFDIIOD; // 0x90
		::UnityEngine::Material* IDBDGJDONAD; // 0x98
		::System::Boolean EEDKJEDOEFO; // 0xA0
		::System::Byte _padding1[0x7];
		::Foundation::AssetRequestHandle ABELMABCOPB; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT__CCTOR_OFFSET))();
		}

		::System::Void set_UsingUV(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_USINGUV_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_Point1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT1_OFFSET))(this);
		}

		::System::Void set_Point1(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT1_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_Color1()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR1_OFFSET))(this);
		}

		::System::Void set_Color1(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR1_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_Point2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT2_OFFSET))(this);
		}

		::System::Void set_Point2(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT2_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_Color2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR2_OFFSET))(this);
		}

		::System::Void set_Color2(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR2_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_Point3()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT3_OFFSET))(this);
		}

		::System::Void set_Point3(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT3_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_Color3()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR3_OFFSET))(this);
		}

		::System::Void set_Color3(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR3_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_Point4()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_POINT4_OFFSET))(this);
		}

		::System::Void set_Point4(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_POINT4_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Color get_Color4()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GET_COLOR4_OFFSET))(this);
		}

		::System::Void set_Color4(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_COLOR4_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_Opacity(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_OPACITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_BlendMode(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_SET_BLENDMODE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFYMESH_OFFSET))(this, KKHICLCLGDM);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIAL_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GETMODIFIEDMATERIALPOST_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void GLHGKPIGJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_GLHGKPIGJLJ_OFFSET))(this);
		}

		::System::Void NIGDIMFIAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_NIGDIMFIAEJ_OFFSET))(this);
		}

		::System::Void DJDFLPPNCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_DJDFLPPNCCH_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void FNPJJIBJLGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_FNPJJIBJLGA_OFFSET))(this);
		}

		::System::Void JFIOGGEDFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_UI4COLORGRADIENT_JFIOGGEDFHB_OFFSET))(this);
		}
	};
}
