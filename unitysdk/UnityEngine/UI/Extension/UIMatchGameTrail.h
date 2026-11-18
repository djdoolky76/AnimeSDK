#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1F8381E0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_CONVERTWORLDPOSTOLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1F8373B0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1F838870)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F838690)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F836B70)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F836FB0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F8382D0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F838320)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_PACKTARGETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1F837E90)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F837890)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITIONS_1_OFFSET UNITYSDK_OFFSET(0x1F837C90)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1F837930)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1F837B90)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F837AE0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x1F838A80)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1F836FC0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x1F837270)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TRANSITIONSTART_OFFSET UNITYSDK_OFFSET(0x1F837130)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F838AE0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F837DF0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F838BE0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F838B80)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F838BF0)
#define UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F838C00)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIMatchGameTrail_TypeDefinitionIndex = 18501;

	class UIMatchGameTrail : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Int32* StaticGet_RampEndColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x4380);
		}
		static ::System::Int32* StaticGet_RampStartColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x4384);
		}
		static ::System::Int32* StaticGet_PackedParam1PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x4388);
		}
		static ::System::Int32* StaticGet_TargetPositionsPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x438C);
		}
		static ::System::Int32* StaticGet_PackedParam0PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x4390);
		}
		static ::System::Int32* StaticGet_RampTilingOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMatchGameTrail_TypeDefinitionIndex)->GetStaticField(0x4394);
		}
		::UnityEngine::Texture* m_Texture; // 0xF8
		::UnityEngine::Mesh* m_Mesh; // 0x100
		::System::Single m_Width; // 0x108
		::System::Single m_Gravity; // 0x10C
		::System::Single m_TransitionStart; // 0x110
		::System::Single m_TransitionEnd; // 0x114
		::UnityEngine::Vector2 m_SourcePosition; // 0x118
		::System::Int32 m_TargetCount; // 0x120
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector2>* m_TargetPositions; // 0x128
		::System::Boolean m_Ramp; // 0x130
		::System::Byte _padding1[0x3];
		::UnityEngine::Color m_RampStartColor; // 0x134
		::UnityEngine::Color m_RampEndColor; // 0x144
		::System::Single m_RampTiling; // 0x154
		::System::Single m_RampOffset; // 0x158
		::System::Byte _padding2[0x4];
		::UnityEngine::Material* m_ModifiedMaterial; // 0x160
		::Il2CppArray<::UnityEngine::Vector4>* m_TargetPositionsPacked; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_SourcePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GET_SOURCEPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TARGETCOUNT_OFFSET))(this, value);
		}

		::System::Void set_TransitionStart(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TRANSITIONSTART_OFFSET))(this, value);
		}

		::System::Void set_TransitionEnd(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SET_TRANSITIONEND_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 ConvertWorldPosToLocalPos(::UnityEngine::RectTransform* canvas, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_CONVERTWORLDPOSTOLOCALPOS_OFFSET))(this, canvas, cam, worldPosition);
		}

		::System::Void SetSourcePosition(::UnityEngine::RectTransform* canvas, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETSOURCEPOSITION_OFFSET))(this, canvas, cam, worldPos);
		}

		::System::Void SetTargetPositions(::UnityEngine::RectTransform* canvas, ::UnityEngine::Camera* cam, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* worldPositions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITIONS_OFFSET))(this, canvas, cam, worldPositions);
		}

		::System::Void SetTargetPosition(::UnityEngine::RectTransform* canvas, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITION_OFFSET))(this, canvas, cam, worldPosition);
		}

		::System::Void SetTargetPosition_1(::System::Int32 index, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITION_1_OFFSET))(this, index, position);
		}

		::System::Void SetTargetPositions_1(::Il2CppArray<::UnityEngine::Vector2>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETTARGETPOSITIONS_1_OFFSET))(this, positions);
		}

		::System::Void PackTargetPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_PACKTARGETPOSITIONS_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_CLEANUP_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL_SETWIDTH_OFFSET))(this, width);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMATCHGAMETRAIL___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
