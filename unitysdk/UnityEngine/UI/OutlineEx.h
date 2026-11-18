#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/SharedUnityObjectResource_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x194D9A50)
#define UNITYENGINE_UI_OUTLINEEX_BINDSPLINETEXTURE_OFFSET UNITYSDK_OFFSET(0x194DA0D0)
#define UNITYENGINE_UI_OUTLINEEX_COLORTRANSITIONPART_OFFSET UNITYSDK_OFFSET(0x194D89D0)
#define UNITYENGINE_UI_OUTLINEEX_ENABLEADDITIONALCHANNELS_OFFSET UNITYSDK_OFFSET(0x194D9BD0)
#define UNITYENGINE_UI_OUTLINEEX_GETMAX_1_OFFSET UNITYSDK_OFFSET(0x194DF730)
#define UNITYENGINE_UI_OUTLINEEX_GETMAX_OFFSET UNITYSDK_OFFSET(0x194DFC60)
#define UNITYENGINE_UI_OUTLINEEX_GETMIN_1_OFFSET UNITYSDK_OFFSET(0x194DF540)
#define UNITYENGINE_UI_OUTLINEEX_GETMIN_OFFSET UNITYSDK_OFFSET(0x194DFBD0)
#define UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x194E0E90)
#define UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x194E0B60)
#define UNITYENGINE_UI_OUTLINEEX_GET_COLORTRANSITION_OFFSET UNITYSDK_OFFSET(0x194D9130)
#define UNITYENGINE_UI_OUTLINEEX_GET_DESATURATE_OFFSET UNITYSDK_OFFSET(0x194D9000)
#define UNITYENGINE_UI_OUTLINEEX_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x194D8AF0)
#define UNITYENGINE_UI_OUTLINEEX_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x194D8B80)
#define UNITYENGINE_UI_OUTLINEEX_GET_GRAYBUTTON_OFFSET UNITYSDK_OFFSET(0x194D8F70)
#define UNITYENGINE_UI_OUTLINEEX_GET_ITERATIONS_OFFSET UNITYSDK_OFFSET(0x194D8DD0)
#define UNITYENGINE_UI_OUTLINEEX_GET_LOOPTIME_OFFSET UNITYSDK_OFFSET(0x194D91C0)
#define UNITYENGINE_UI_OUTLINEEX_GET_RADIAN360_OFFSET UNITYSDK_OFFSET(0x194D8E60)
#define UNITYENGINE_UI_OUTLINEEX_GET_SATURATION_OFFSET UNITYSDK_OFFSET(0x194D9090)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORA_OFFSET UNITYSDK_OFFSET(0x194D9320)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORB_OFFSET UNITYSDK_OFFSET(0x194D93F0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORC_OFFSET UNITYSDK_OFFSET(0x194D94D0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORD_OFFSET UNITYSDK_OFFSET(0x194D95B0)
#define UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x194D9270)
#define UNITYENGINE_UI_OUTLINEEX_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x194D9690)
#define UNITYENGINE_UI_OUTLINEEX_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x194E0E50)
#define UNITYENGINE_UI_OUTLINEEX_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x194DAA50)
#define UNITYENGINE_UI_OUTLINEEX_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x194DA4E0)
#define UNITYENGINE_UI_OUTLINEEX_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x194DA580)
#define UNITYENGINE_UI_OUTLINEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194D9E70)
#define UNITYENGINE_UI_OUTLINEEX_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x194DA490)
#define UNITYENGINE_UI_OUTLINEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194D8590)
#define UNITYENGINE_UI_OUTLINEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x194D8200)
#define UNITYENGINE_UI_OUTLINEEX_ONGRAPHICVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x194D9840)
#define UNITYENGINE_UI_OUTLINEEX_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x194D8910)
#define UNITYENGINE_UI_OUTLINEEX_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x194D8970)
#define UNITYENGINE_UI_OUTLINEEX_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x194D8650)
#define UNITYENGINE_UI_OUTLINEEX_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x194D82C0)
#define UNITYENGINE_UI_OUTLINEEX_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x194DA420)
#define UNITYENGINE_UI_OUTLINEEX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x194DA600)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSQUADSLICEDIMAGEVERTICES_OFFSET UNITYSDK_OFFSET(0x194DB240)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSREGULARVERTICES_OFFSET UNITYSDK_OFFSET(0x194DD6A0)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSTRISLICEDIMAGEVERTICES_OFFSET UNITYSDK_OFFSET(0x194DC0A0)
#define UNITYENGINE_UI_OUTLINEEX_PROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x194DE510)
#define UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEALPHAMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x194DA980)
#define UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x194DA740)
#define UNITYENGINE_UI_OUTLINEEX_REFRESH_OFFSET UNITYSDK_OFFSET(0x194D8D30)
#define UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPSUNMASK_OFFSET UNITYSDK_OFFSET(0x194E0590)
#define UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x194DFCF0)
#define UNITYENGINE_UI_OUTLINEEX_SETNEWPOSANDUV_OFFSET UNITYSDK_OFFSET(0x194DF920)
#define UNITYENGINE_UI_OUTLINEEX_SETSPINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x194DA280)
#define UNITYENGINE_UI_OUTLINEEX_SET_COLORTRANSITION_OFFSET UNITYSDK_OFFSET(0x194D9140)
#define UNITYENGINE_UI_OUTLINEEX_SET_DESATURATE_OFFSET UNITYSDK_OFFSET(0x194D9010)
#define UNITYENGINE_UI_OUTLINEEX_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x194D8B00)
#define UNITYENGINE_UI_OUTLINEEX_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x194D8B90)
#define UNITYENGINE_UI_OUTLINEEX_SET_GRAYBUTTON_OFFSET UNITYSDK_OFFSET(0x194D8F80)
#define UNITYENGINE_UI_OUTLINEEX_SET_ITERATIONS_OFFSET UNITYSDK_OFFSET(0x194D8DE0)
#define UNITYENGINE_UI_OUTLINEEX_SET_LOOPTIME_OFFSET UNITYSDK_OFFSET(0x194D91D0)
#define UNITYENGINE_UI_OUTLINEEX_SET_RADIAN360_OFFSET UNITYSDK_OFFSET(0x194D8E70)
#define UNITYENGINE_UI_OUTLINEEX_SET_SATURATION_OFFSET UNITYSDK_OFFSET(0x194D90A0)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORA_OFFSET UNITYSDK_OFFSET(0x194D9330)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORB_OFFSET UNITYSDK_OFFSET(0x194D9400)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORC_OFFSET UNITYSDK_OFFSET(0x194D94E0)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORD_OFFSET UNITYSDK_OFFSET(0x194D95C0)
#define UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x194D9280)
#define UNITYENGINE_UI_OUTLINEEX_START_OFFSET UNITYSDK_OFFSET(0x194D9B20)
#define UNITYENGINE_UI_OUTLINEEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x194E1310)
#define UNITYENGINE_UI_OUTLINEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x194E11C0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x194E14E0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x194E1570)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x194E1600)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x194E1690)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194E1720)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x194E17B0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194E17C0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x194E17D0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x194E17E0)
#define UNITYENGINE_UI_OUTLINEEX___BASE_START_OFFSET UNITYSDK_OFFSET(0x194E1870)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int OutlineEx_TypeDefinitionIndex = 72362;

	class OutlineEx : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>* StaticGet_sharedUnityObjectResource()
		{
			return (::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0x39F40);
		}
		static ::System::Int32* StaticGet_Percentage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD410);
		}
		static ::System::Int32* StaticGet_LoopTime1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD414);
		}
		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD418);
		}
		static ::System::Int32* StaticGet_ColorC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD41C);
		}
		static ::System::Int32* StaticGet_BodyAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD420);
		}
		static ::System::Int32* StaticGet_OutlineAlphaMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD424);
		}
		static ::System::Int32* StaticGet_ColorId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD428);
		}
		static ::System::Int32* StaticGet_OutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD42C);
		}
		static ::System::Int32* StaticGet_SaturateId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD430);
		}
		static ::System::Int32* StaticGet_ColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD434);
		}
		static ::System::Int32* StaticGet_CullBodyAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD438);
		}
		static ::System::Int32* StaticGet_OutlinePosArray()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD43C);
		}
		static ::System::Int32* StaticGet_SampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD440);
		}
		static ::System::Int32* StaticGet_ColorD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD444);
		}
		static ::System::Int32* StaticGet_Radian360PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD448);
		}
		static ::System::Int32* StaticGet_ColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineEx_TypeDefinitionIndex)->GetStaticField(0xD44C);
		}
		// static const ::System::String* TextBoldnessAndSharpnessKeyword; // 0x0
		// static const ::System::String* ColorTransitionKeyword; // 0x0
		// static const ::System::String* ColorTransitionBodyKeyword; // 0x0
		// static const ::System::String* UseForSpineKeyword; // 0x0
		// static const ::System::String* UseForOfflineSpineKeyword; // 0x0
		// static const ::System::String* IsTextComponentKeyword; // 0x0
		// static const ::System::String* KeepWidthKeyword; // 0x0
		::UnityEngine::Color m_EffectColor; // 0x20
		::System::Single m_EffectDistance; // 0x30
		::System::Int32 m_Iterations; // 0x34
		::System::Single m_AngleRange; // 0x38
		::System::Single m_AngleOffset; // 0x3C
		::System::Single m_BodyAlpha; // 0x40
		::System::Single m_Radian360; // 0x44
		::System::Boolean m_KeepWidth; // 0x48
		::System::Boolean m_CullBodyAlpha; // 0x49
		::System::Byte _padding0[0x6];
		::UnityEngine::RenderTexture* spineTextureHolder; // 0x50
		::System::Boolean m_UseForSpine; // 0x58
		::System::Boolean m_GrayButton; // 0x59
		::System::Boolean m_Desaturate; // 0x5A
		::System::Byte _padding1[0x1];
		::System::Single m_Saturation; // 0x5C
		::System::Boolean m_ColorTransition; // 0x60
		::System::Byte _padding2[0x3];
		::System::Int32 m_ColorTransitionPart; // 0x64
		::System::Single m_LoopTime; // 0x68
		::System::Single m_TransitionPercentage; // 0x6C
		::UnityEngine::Color m_TransitionColorA; // 0x70
		::UnityEngine::Color m_TransitionColorB; // 0x80
		::UnityEngine::Color m_TransitionColorC; // 0x90
		::UnityEngine::Color m_TransitionColorD; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* m_OutlinePosArray; // 0xB0
		::System::Single m_OutlineAlphaMultiplier; // 0xB8
		::System::Boolean m_UseForOfflineSpine; // 0xBC
		::System::Byte _padding3[0x3];
		::System::Single m_LastGraphicAlpha; // 0xC0
		::System::Int32 _lastIterations; // 0xC4
		::System::Single _lastAngleRange; // 0xC8
		::System::Single _lastAngleOffset; // 0xCC
		::UnityEngine::Material* thisClonedMaterial; // 0xD0
		::UnityEngine::Quaternion _lastRotation; // 0xD8
		::System::Boolean _pendingSetMaterialDirty; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>* ColorTransitionPart()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_COLORTRANSITIONPART_OFFSET))(this);
		}

		::UnityEngine::Color get_effectColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_EFFECTCOLOR_OFFSET))(this);
		}

		::System::Void set_effectColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_EFFECTCOLOR_OFFSET))(this, value);
		}

		::System::Single get_effectDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_EFFECTDISTANCE_OFFSET))(this);
		}

		::System::Void set_effectDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_EFFECTDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_iterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_ITERATIONS_OFFSET))(this);
		}

		::System::Void set_iterations(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_ITERATIONS_OFFSET))(this, value);
		}

		::System::Single get_Radian360()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_RADIAN360_OFFSET))(this);
		}

		::System::Void set_Radian360(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_RADIAN360_OFFSET))(this, value);
		}

		::System::Boolean get_GrayButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_GRAYBUTTON_OFFSET))(this);
		}

		::System::Void set_GrayButton(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_GRAYBUTTON_OFFSET))(this, value);
		}

		::System::Boolean get_Desaturate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_DESATURATE_OFFSET))(this);
		}

		::System::Void set_Desaturate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_DESATURATE_OFFSET))(this, value);
		}

		::System::Single get_Saturation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_SATURATION_OFFSET))(this);
		}

		::System::Void set_Saturation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_SATURATION_OFFSET))(this, value);
		}

		::System::Boolean get_ColorTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_COLORTRANSITION_OFFSET))(this);
		}

		::System::Void set_ColorTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_COLORTRANSITION_OFFSET))(this, value);
		}

		::System::Single get_LoopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_LOOPTIME_OFFSET))(this);
		}

		::System::Void set_LoopTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_LOOPTIME_OFFSET))(this, value);
		}

		::System::Single get_TransitionPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_TransitionPercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONPERCENTAGE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorA()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORA_OFFSET))(this);
		}

		::System::Void set_TransitionColorA(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORA_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORB_OFFSET))(this);
		}

		::System::Void set_TransitionColorB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorC()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORC_OFFSET))(this);
		}

		::System::Void set_TransitionColorC(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORC_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TransitionColorD()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GET_TRANSITIONCOLORD_OFFSET))(this);
		}

		::System::Void set_TransitionColorD(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SET_TRANSITIONCOLORD_OFFSET))(this, value);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ISACTIVE_OFFSET))(this);
		}

		::System::Void OnGraphicVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONGRAPHICVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_START_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDESTROY_OFFSET))(this);
		}

		::System::Void BindSplineTexture(::UnityEngine::RenderTexture* spineRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_BINDSPLINETEXTURE_OFFSET))(this, spineRT);
		}

		::System::Void SetSpineMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETSPINEMATERIAL_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnableAdditionalChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_ENABLEADDITIONALCHANNELS_OFFSET))(this);
		}

		::System::Void RefreshOutlinePosArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEPOSARRAY_OFFSET))(this);
		}

		::System::Void RefreshOutlineAlphaMultiplier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESHOUTLINEALPHAMULTIPLIER_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_REFRESH_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ProcessRegularVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSREGULARVERTICES_OFFSET))(this, vh);
		}

		::System::Void ProcessVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*& vertexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSVERTICES_OFFSET))(this, vertexList);
		}

		static ::UnityEngine::UIVertex SetNewPosAndUV(::UnityEngine::UIVertex pVertex, ::System::Single pOutLineWidth, ::UnityEngine::Vector2 pPosCenter, ::UnityEngine::Vector2 pTriangleX, ::UnityEngine::Vector2 pTriangleY, ::UnityEngine::Vector2 pUVX, ::UnityEngine::Vector2 pUVY, ::UnityEngine::Vector2 pUVMin, ::UnityEngine::Vector2 pUVMax)
		{
			return ((::UnityEngine::UIVertex(*)(::UnityEngine::UIVertex, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETNEWPOSANDUV_OFFSET))(pVertex, pOutLineWidth, pPosCenter, pTriangleX, pTriangleY, pUVX, pUVY, pUVMin, pUVMax);
		}

		::System::Void ProcessQuadSlicedImageVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSQUADSLICEDIMAGEVERTICES_OFFSET))(this, vh);
		}

		::System::Void ProcessTriSlicedImageVertices(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_PROCESSTRISLICEDIMAGEVERTICES_OFFSET))(this, vh);
		}

		static ::System::Single GetMin(::System::Single pA, ::System::Single pB, ::System::Single pC)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMIN_OFFSET))(pA, pB, pC);
		}

		static ::System::Single GetMax(::System::Single pA, ::System::Single pB, ::System::Single pC)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMAX_OFFSET))(pA, pB, pC);
		}

		static ::UnityEngine::Vector2 GetMin_1(::UnityEngine::Vector2 pA, ::UnityEngine::Vector2 pB, ::UnityEngine::Vector2 pC)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMIN_1_OFFSET))(pA, pB, pC);
		}

		static ::UnityEngine::Vector2 GetMax_1(::UnityEngine::Vector2 pA, ::UnityEngine::Vector2 pB, ::UnityEngine::Vector2 pC)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMAX_1_OFFSET))(pA, pB, pC);
		}

		::System::Void SetMaterialProps(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPS_OFFSET))(this, material);
		}

		::System::Void SetMaterialPropsUnmask(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_SETMATERIALPROPSUNMASK_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEX___BASE_START_OFFSET))(this);
		}
	};
}
