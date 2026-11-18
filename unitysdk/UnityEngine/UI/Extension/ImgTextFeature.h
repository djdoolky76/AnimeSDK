#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_DeferredWork.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/BaseTextMeshRange.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_ResolvedIconInfo.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class NAP_TextInfo; }
namespace UnityEngine::UI::Extension { class UITextTypewriterBinding; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYGREY_OFFSET UNITYSDK_OFFSET(0x1E1A54B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYMINWIDTHCHECK_OFFSET UNITYSDK_OFFSET(0x1E1A51A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDIMAGEENTRY_OFFSET UNITYSDK_OFFSET(0x1E1A67D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDKEYENTRY_OFFSET UNITYSDK_OFFSET(0x1E1A5DA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDRUNTIMEICON_OFFSET UNITYSDK_OFFSET(0x1E1A5CB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COLLECTALLICONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E1A92B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COMPUTEALLFITSCALES_OFFSET UNITYSDK_OFFSET(0x1E1A3D90)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONSHORTCUTTAGS_OFFSET UNITYSDK_OFFSET(0x1E1A2C80)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONTAGS_OFFSET UNITYSDK_OFFSET(0x1E1A2AE0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1E1A8620)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x1E1A8440)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DOPREPROCESS_OFFSET UNITYSDK_OFFSET(0x1E1A3340)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1E1A8390)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FILTERQUADINFOS_OFFSET UNITYSDK_OFFSET(0x1E1A3730)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINALIZEENTRY_OFFSET UNITYSDK_OFFSET(0x1E1A6D60)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDQUADVERTEXRANGE_OFFSET UNITYSDK_OFFSET(0x1E1A8AB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDTRUNCATEDQUADVERTEXRANGE_OFFSET UNITYSDK_OFFSET(0x1E1A8C40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FOLDQUADVERTICES_OFFSET UNITYSDK_OFFSET(0x1E1A4070)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETDESIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x1E1A8280)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_1_OFFSET UNITYSDK_OFFSET(0x1E1A8E00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_OFFSET UNITYSDK_OFFSET(0x1E1A8060)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETIMGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E1A8D70)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONENTRY_OFFSET UNITYSDK_OFFSET(0x1E1A6F70)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1E1A35F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1E1A3520)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1E1A2DA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISICONPLACEHOLDERQUAD_OFFSET UNITYSDK_OFFSET(0x1E1A9200)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISTEXTTRUNCATED_OFFSET UNITYSDK_OFFSET(0x1E1A8BA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x1E1A7CE0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1E1A2E10)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1E1A3450)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1E1A43F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1E1A3120)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONENABLECORE_OFFSET UNITYSDK_OFFSET(0x1E1A2EC0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINITCORE_OFFSET UNITYSDK_OFFSET(0x1E1A2DB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1E1A4320)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_READQUADPOSITIONSFROMTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1E1A3960)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETGREY_OFFSET UNITYSDK_OFFSET(0x1E1A9520)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET UNITYSDK_OFFSET(0x1E1A32F0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEICON_OFFSET UNITYSDK_OFFSET(0x1E1A5840)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETGREY_OFFSET UNITYSDK_OFFSET(0x1E1A94B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1E1A2F20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET UNITYSDK_OFFSET(0x1E1A81D0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET UNITYSDK_OFFSET(0x1E1A8EB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_TRYGETORIGINALQUADBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E1A93E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x1E1A5C00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1E1A4780)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E1A4740)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x1E1A3670)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET UNITYSDK_OFFSET(0x1E1A4010)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x1E1A31C0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1E1A3250)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERBINDINGPROVIDER_COLLECTTYPEWRITERBINDINGS_OFFSET UNITYSDK_OFFSET(0x1E1A8F00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UPDATEICONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E1A48A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9890)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9810)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1E1A98E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1E1A9970)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1E1A9A00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1E1A9A90)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1E1A9B20)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONENABLECORE_OFFSET UNITYSDK_OFFSET(0x1E1A9BB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONINITCORE_OFFSET UNITYSDK_OFFSET(0x1E1A9C40)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1E1A9CD0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_TypeDefinitionIndex = 40771;

	class ImgTextFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__corner()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ImgTextFeature_TypeDefinitionIndex)->GetStaticField(0x52500);
		}
		// static const ::System::String* KeyPrefix; // 0x0
		// static const ::System::String* KeyTextPrefix; // 0x0
		// static const ::System::String* MousePrefix; // 0x0
		// static const ::System::String* GamepadPrefix; // 0x0
		// static const ::System::String* ActionPrefix; // 0x0
		// static const ::System::Int32 QUAD_VERTEX_NUM = 0x4; // 0x0
		// static const ::System::Int32 MIN_QUAD_TAG_CHAR_COUNT = 0x28; // 0x0
		// static const ::System::Int32 INITIAL_POOL_CAPACITY = 0x4; // 0x0
		// static const ::System::Single IMG_FONT_SIZE_MATCH_SCALE; // 0x0
		::Il2CppArray<::System::Object*>* _entries; // 0x20
		::System::Collections::Generic::List_1<::EBDKCHECNEH>* _quadInfos; // 0x28
		::UnityEngine::Material* _greyMat; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _loadedAssetRequests; // 0x38
		::System::Boolean _isGrey; // 0x40
		::System::Boolean _fontSizeDirty; // 0x41
		::System::Byte _padding0[0x2];
		::System::Int32 _truncatedSearchStart; // 0x44
		::System::Int32 _usedCount; // 0x48
		::System::Int32 _poolCount; // 0x4C
		::System::Int32 _lastBuildFontSize; // 0x50
		::System::Int32 _activeCount; // 0x54
		::UnityEngine::UI::Extension::ImgTextFeature_DeferredWork _deferred; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE__CCTOR_OFFSET))();
		}

		static ::System::Boolean ContainsIconTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONTAGS_OFFSET))(text);
		}

		static ::System::Boolean ContainsIconShortcutTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CONTAINSICONSHORTCUTTAGS_OFFSET))(text);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInitCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONINITCORE_OFFSET))(this);
		}

		::System::Void OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void OnEnableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONENABLECORE_OFFSET))(this);
		}

		::System::Void OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDISABLECORE_OFFSET))(this);
		}

		::System::Boolean UnityEngine_UI_Extension_IUITextPreprocessor_DetectsContent(::System::String* rawText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET))(this, rawText);
		}

		::System::String* UnityEngine_UI_Extension_IUITextPreprocessor_Preprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET))(this, rawText);
		}

		::System::Void OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::String* DoPreprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_DOPREPROCESS_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshModifier_OnRenderMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ONDESTROYCORE_OFFSET))(this);
		}

		::System::Boolean UnityEngine_UI_Extension_IPostCanvasRebuild_get_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IPostCanvasRebuild_ExecutePostRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET))(this);
		}

		::System::Void ApplyMinWidthCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYMINWIDTHCHECK_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo ResolveIcon(::System::String* quadName)
		{
			return ((::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESOLVEICON_OFFSET))(this, quadName);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> UnityEngine_UI_Extension_IImgIconLoader_LoadNextIcon(::System::String* quadName, ::System::Int32 charIndex, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET))(this, quadName, charIndex, overrideHeight);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> BuildRuntimeIcon(::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo iconInfo, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDRUNTIMEICON_OFFSET))(this, iconInfo, overrideHeight);
		}

		::UnityEngine::Vector2 BuildKeyEntry(::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo iconInfo, ::System::Single overrideHeight, ::System::Int32& iconIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDKEYENTRY_OFFSET))(this, iconInfo, overrideHeight, iconIndex);
		}

		::UnityEngine::Vector2 BuildImageEntry(::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo iconInfo, ::System::Single overrideHeight, ::System::Int32& iconIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::UI::Extension::ImgTextFeature_ResolvedIconInfo, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_BUILDIMAGEENTRY_OFFSET))(this, iconInfo, overrideHeight, iconIndex);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> FinalizeEntry(::System::Int32 iconIndex, ::UnityEngine::Vector2 nativeSize, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINALIZEENTRY_OFFSET))(this, iconIndex, nativeSize, overrideHeight);
		}

		::System::Int32 GetOrCreateIconEntry(::UnityEngine::UI::Extension::EImgTextIconType type, ::System::Single overrideHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::EImgTextIconType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETORCREATEICONENTRY_OFFSET))(this, type, overrideHeight);
		}

		::UnityEngine::UI::Image* CreateImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEIMAGE_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*> CreateKey()
		{
			return ((::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_CREATEKEY_OFFSET))(this);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* path)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_LOADSPRITE_OFFSET))(this, path);
		}

		::System::Void FilterQuadInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FILTERQUADINFOS_OFFSET))(this);
		}

		::System::Void ReadQuadPositionsFromTextInfo(::UnityEngine::UI::Extension::NAP_TextInfo* textInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::NAP_TextInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_READQUADPOSITIONSFROMTEXTINFO_OFFSET))(this, textInfo);
		}

		::System::Void FoldQuadVertices(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FOLDQUADVERTICES_OFFSET))(this, toFill);
		}

		::System::Boolean IsTextTruncated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISTEXTTRUNCATED_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> FindQuadVertexRange(::System::Int32 iconIndex, ::System::Int32 totalIconCount, ::UnityEngine::UI::Extension::BaseTextMeshRange baseRange, ::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::UI::Extension::BaseTextMeshRange, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDQUADVERTEXRANGE_OFFSET))(this, iconIndex, totalIconCount, baseRange, toFill);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> FindTruncatedQuadVertexRange(::UnityEngine::UI::VertexHelper* toFill, ::System::Int32 defaultStart, ::UnityEngine::UI::Extension::BaseTextMeshRange baseRange)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Int32, ::UnityEngine::UI::Extension::BaseTextMeshRange))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_FINDTRUNCATEDQUADVERTEXRANGE_OFFSET))(this, toFill, defaultStart, baseRange);
		}

		::System::Single GetImgHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETIMGHEIGHT_OFFSET))(this);
		}

		::System::Single GetFitScale(::System::Single overrideHeight, ::System::Single height)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_OFFSET))(this, overrideHeight, height);
		}

		::System::Single GetFitScale_1(::System::Single overrideHeight, ::System::Single height, ::System::Single basicScale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETFITSCALE_1_OFFSET))(this, overrideHeight, height, basicScale);
		}

		::System::Void ComputeAllFitScales()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COMPUTEALLFITSCALES_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetDesignedSize(::UnityEngine::Vector2 nativeSize, ::System::Single overrideHeight)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETDESIGNEDSIZE_OFFSET))(this, nativeSize, overrideHeight);
		}

		::System::Int32 GetStandFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_GETSTANDFONTSIZE_OFFSET))(this);
		}

		::System::Void UpdateIconPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UPDATEICONPOSITIONS_OFFSET))(this);
		}

		::System::Void ShowAllImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SHOWALLIMAGE_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypewriterBindingProvider_CollectTypewriterBindings(::UnityEngine::UI::Extension::UITextTypewriterBinding* binding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextTypewriterBinding*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERBINDINGPROVIDER_COLLECTTYPEWRITERBINDINGS_OFFSET))(this, binding);
		}

		::System::Boolean IsIconPlaceholderQuad(::System::Int32 gi)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ISICONPLACEHOLDERQUAD_OFFSET))(this, gi);
		}

		::System::Void CollectAllIconBounds(::System::Collections::Generic::List_1<::UnityEngine::Rect>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_COLLECTALLICONBOUNDS_OFFSET))(this, output);
		}

		::System::Boolean TryGetOriginalQuadBounds(::System::Int32 gi, ::UnityEngine::Rect& bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_TRYGETORIGINALQUADBOUNDS_OFFSET))(this, gi, bounds);
		}

		::System::Void SetGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETGREY_OFFSET))(this, isGrey);
		}

		::System::Void ApplyGrey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_APPLYGREY_OFFSET))(this);
		}

		::System::Void ResetGrey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETGREY_OFFSET))(this);
		}

		::System::Void SetIconActiveCount(::System::Int32 activeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETICONACTIVECOUNT_OFFSET))(this, activeCount);
		}

		::System::Void ResetIconItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_RESETICONITEM_OFFSET))(this);
		}

		::System::Void SetImgAnchorByTrans(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_SETIMGANCHORBYTRANS_OFFSET))(this, rt);
		}

		::System::Void EnsureCapacity(::System::Int32 needed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ENSURECAPACITY_OFFSET))(this, needed);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void __base_OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void __base_OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void __base_OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDESTROYCORE_OFFSET))(this);
		}

		::System::Void __base_OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONDISABLECORE_OFFSET))(this);
		}

		::System::Void __base_OnEnableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONENABLECORE_OFFSET))(this);
		}

		::System::Void __base_OnInitCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONINITCORE_OFFSET))(this);
		}

		::System::Boolean __base_OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE___BASE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}
	};
}
