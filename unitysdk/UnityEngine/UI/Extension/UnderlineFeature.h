#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureRuntimeSwitchMask.h"
#include "unitysdk/UnityEngine/UI/Extension/UnderlineYMode.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/UnderlineFeature_LineSegment.h"
#include "unitysdk/UnityEngine/UI/Extension/UnderlineRenderParams.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ADDUNDERLINEQUAD_OFFSET UNITYSDK_OFFSET(0x1C68B200)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTCOLORSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C68CB50)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTRANGELINEBOXES_OFFSET UNITYSDK_OFFSET(0x1C68B0F0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C68D210)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COMPUTESEGMENTBASEY_OFFSET UNITYSDK_OFFSET(0x1C68CF90)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_DRAWALL_OFFSET UNITYSDK_OFFSET(0x1C689DE0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ENSURETEXCOORD3CHANNEL_OFFSET UNITYSDK_OFFSET(0x1C68A590)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_FILTERRANGES_OFFSET UNITYSDK_OFFSET(0x1C689C00)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETGIUNDERLINEY_OFFSET UNITYSDK_OFFSET(0x1C68A170)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1C689AD0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETUNDERLINEUV_OFFSET UNITYSDK_OFFSET(0x1C68A230)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_RUNTIMESWITCHMASK_OFFSET UNITYSDK_OFFSET(0x1C68A160)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_INITQUADTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C68A7D0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_RESOLVERENDERPARAMS_1_OFFSET UNITYSDK_OFFSET(0x1C68C400)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_RESOLVERENDERPARAMS_OFFSET UNITYSDK_OFFSET(0x1C68A730)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SPLITINTOLINES_OFFSET UNITYSDK_OFFSET(0x1C68C7C0)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x1C689B50)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET UNITYSDK_OFFSET(0x1C689D50)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C68D310)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C68D260)
#define UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1C68D390)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UnderlineFeature_TypeDefinitionIndex = 64285;

	class UnderlineFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet__featherQuad()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0x364D0);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet__quad()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0x364D8);
		}
		static ::UnityEngine::UI::Extension::UnderlineYMode* StaticGet_underlineYMode()
		{
			return (::UnityEngine::UI::Extension::UnderlineYMode*)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0xC200);
		}
		static ::System::Boolean* StaticGet__quadTemplateInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0xC204);
		}
		static ::UnityEngine::Vector4* StaticGet_kDecorationStyleParams()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UnderlineFeature_TypeDefinitionIndex)->GetStaticField(0xC208);
		}
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* _lineBoxes; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _lineSegments; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _quadRanges; // 0x30
		::System::Single _cachedHeightDelta; // 0x38
		::System::Boolean _texCoord3Ensured; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single _cachedUlOffsetLocal; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE__CCTOR_OFFSET))();
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshModifier_OnRenderMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET))(this, toFill);
		}

		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask get_RuntimeSwitchMask()
		{
			return ((::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GET_RUNTIMESWITCHMASK_OFFSET))(this);
		}

		::System::Void FilterRanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_FILTERRANGES_OFFSET))(this);
		}

		::System::Single GetGiUnderlineY(::System::Int32 gi)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETGIUNDERLINEY_OFFSET))(this, gi);
		}

		::System::Void DrawAll(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_DRAWALL_OFFSET))(this, toFill);
		}

		static ::UnityEngine::UI::Extension::UnderlineRenderParams ResolveRenderParams(::UnityEngine::UI::Extension::UILocalizationText* host)
		{
			return ((::UnityEngine::UI::Extension::UnderlineRenderParams(*)(::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_RESOLVERENDERPARAMS_OFFSET))(host);
		}

		static ::UnityEngine::UI::Extension::UnderlineRenderParams ResolveRenderParams_1(::UnityEngine::UI::Extension::UILocalizationText* host, ::System::Single& oneScreenPixelLocal)
		{
			return ((::UnityEngine::UI::Extension::UnderlineRenderParams(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_RESOLVERENDERPARAMS_1_OFFSET))(host, oneScreenPixelLocal);
		}

		::System::Void CollectRangeLineBoxes(::System::Int32 giStart, ::System::Int32 giEnd, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* outBoxes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTRANGELINEBOXES_OFFSET))(this, giStart, giEnd, outBoxes);
		}

		::System::Void SplitIntoLines(::System::Int32 giStart, ::System::Int32 giEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_SPLITINTOLINES_OFFSET))(this, giStart, giEnd);
		}

		::System::Single ComputeSegmentBaseY(::System::Int32 startGi, ::System::Int32 endGi, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COMPUTESEGMENTBASEY_OFFSET))(this, startGi, endGi, charInfos);
		}

		::System::Void CollectColorSegments(::UnityEngine::UI::Extension::UnderlineFeature_LineSegment line, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>* outBoxes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UnderlineFeature_LineSegment, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rect, ::UnityEngine::Color32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLLECTCOLORSEGMENTS_OFFSET))(this, line, outBoxes);
		}

		static ::System::Boolean ColorEqual(::UnityEngine::Color32 a, ::UnityEngine::Color32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_COLOREQUAL_OFFSET))(a, b);
		}

		static ::System::Void InitQuadTemplate(::UnityEngine::Vector2 uvCenter)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_INITQUADTEMPLATE_OFFSET))(uvCenter);
		}

		::System::Void AddUnderlineQuad(::UnityEngine::UI::VertexHelper* vh, ::UnityEngine::Rect lineBox, ::UnityEngine::Color32 lineColor, ::System::Single thickness, ::System::Single feather)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Rect, ::UnityEngine::Color32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ADDUNDERLINEQUAD_OFFSET))(this, vh, lineBox, lineColor, thickness, feather);
		}

		::System::Void EnsureTexCoord3Channel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_ENSURETEXCOORD3CHANNEL_OFFSET))(this);
		}

		::System::Boolean GetUnderlineUV(::UnityEngine::Vector2& uvCenter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE_GETUNDERLINEUV_OFFSET))(this, uvCenter);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UNDERLINEFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}
	};
}
