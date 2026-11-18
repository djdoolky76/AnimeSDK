#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOPMDBBNGGK.h"
#include "unitysdk/NPCOFEOMEIF.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/DACHBCNPGPJ.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyAnnotationRuntimeData.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyMeasureResult.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyTagParams.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class IUITextLineExtraHeightWriter; }
namespace UnityEngine::UI::Extension { class IUITextTypesetConstraintWriter; }
namespace UnityEngine::UI::Extension { class UITextTypewriterBinding; }

#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDRUBYANNOTATIONMESH_OFFSET UNITYSDK_OFFSET(0x1BF4B3E0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYANNOTATIONINFOS_OFFSET UNITYSDK_OFFSET(0x1BF48B30)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYFONTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BF4D330)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BF4DB40)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYPREFERREDHEIGHTINPUTS_OFFSET UNITYSDK_OFFSET(0x1BF4C660)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1BF491D0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCOVERHANGSCALE_OFFSET UNITYSDK_OFFSET(0x1BF4F660)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCRUBYHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1BF4F780)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CONTAINSRUBYTAGS_OFFSET UNITYSDK_OFFSET(0x1BF48820)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EMITRUBYQUADS_OFFSET UNITYSDK_OFFSET(0x1BF4E270)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EXTRACTRUBYANNOTATION_OFFSET UNITYSDK_OFFSET(0x1BF4AF60)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FINDMATCHINGRUBYRIGHTTAGINDEX_OFFSET UNITYSDK_OFFSET(0x1BF4A6A0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FLUSHQUADS_OFFSET UNITYSDK_OFFSET(0x1BF4EC90)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETBASEFONTSIZEFOROVERHANG_OFFSET UNITYSDK_OFFSET(0x1BF4D420)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETEXTRAPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BF4BF90)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETLINEFORCHARINDEX_OFFSET UNITYSDK_OFFSET(0x1BF4D1D0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1BF489E0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYGENBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BF4F220)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYMAXFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1BF49B60)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETTOTALRUBYHEIGHT_OFFSET UNITYSDK_OFFSET(0x1BF4F8A0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETUNITSPERPIXEL_OFFSET UNITYSDK_OFFSET(0x1BF49AE0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x1BF48780)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_RUBYGEN_OFFSET UNITYSDK_OFFSET(0x1BF48790)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_INVALIDATEGENERATORS_OFFSET UNITYSDK_OFFSET(0x1BF4BF40)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ISRUBYLEFTTAG_OFFSET UNITYSDK_OFFSET(0x1BF4A600)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_MEASURERUBYFORBASEWIDTH_OFFSET UNITYSDK_OFFSET(0x1BF49C70)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1BF4BE40)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_POPULATERUBYGENERATOR_OFFSET UNITYSDK_OFFSET(0x1BF4DCE0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RECORDRUBYQUADTEXTBINDINGS_OFFSET UNITYSDK_OFFSET(0x1BF4E900)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RECORDRUBYQUADTEXTBINDING_OFFSET UNITYSDK_OFFSET(0x1BF4F130)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVERUBYCOLORFROMTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1BF4A110)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVETEXTINDEXFROMBASERANGE_OFFSET UNITYSDK_OFFSET(0x1BF4EF70)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVETEXTINDEX_OFFSET UNITYSDK_OFFSET(0x1BF4F1B0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYBUILDRUBYTAGPARAMS_OFFSET UNITYSDK_OFFSET(0x1BF4A890)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYEXTRACTRTANNOTATION_OFFSET UNITYSDK_OFFSET(0x1BF4ABD0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYGETPREFERREDVISIBLERUBYBASE_OFFSET UNITYSDK_OFFSET(0x1BF4CCE0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADCOLORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF4B030)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADFLOATATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF4B180)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x1BF4D840)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_COLLECTLINEEXTRAHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1BF4D500)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_REBUILDLAYOUTADJUSTMENTINPUT_OFFSET UNITYSDK_OFFSET(0x1BF49150)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET UNITYSDK_OFFSET(0x1BF4B2F0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x1BF488C0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1BF48990)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSTRAINTPROVIDER_COLLECTTYPESETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1BF48A60)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERBINDINGPROVIDER_COLLECTTYPEWRITERBINDINGS_OFFSET UNITYSDK_OFFSET(0x1BF4BD40)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4F990)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1BF4FA90)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1BF4FB20)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_TypeDefinitionIndex = 74764;

	class RubyFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		::Il2CppArray<::UnityEngine::UIVertex>* _tempVerts; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _annotationInfos; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* _perLineMaxRubyHeight; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* _preferredHeightInputs; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _rubyQuadTextBindings; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* _rubyRuntimeData; // 0x48
		::UnityEngine::TextGenerator* _rubyGen; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_RubyGen()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_RUBYGEN_OFFSET))(this);
		}

		static ::System::Boolean ContainsRubyTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CONTAINSRUBYTAGS_OFFSET))(text);
		}

		::System::Boolean UnityEngine_UI_Extension_IUITextPreprocessor_DetectsContent(::System::String* rawText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET))(this, rawText);
		}

		::System::String* UnityEngine_UI_Extension_IUITextPreprocessor_Preprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypesetConstraintProvider_CollectTypesetConstraints(::UnityEngine::UI::Extension::IUITextTypesetConstraintWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::IUITextTypesetConstraintWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSTRAINTPROVIDER_COLLECTTYPESETCONSTRAINTS_OFFSET))(this, writer);
		}

		::System::Void UnityEngine_UI_Extension_IUITextLayoutAdjustmentProvider_RebuildLayoutAdjustmentInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_REBUILDLAYOUTADJUSTMENTINPUT_OFFSET))(this);
		}

		::System::Void BuildRubyRuntimeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYRUNTIMEDATA_OFFSET))(this);
		}

		::System::Boolean BuildRubyAnnotationInfos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYANNOTATIONINFOS_OFFSET))(this);
		}

		static ::System::Boolean IsRubyLeftTag(::GOPMDBBNGGK tag)
		{
			return ((::System::Boolean(*)(::GOPMDBBNGGK))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ISRUBYLEFTTAG_OFFSET))(tag);
		}

		static ::System::Int32 FindMatchingRubyRightTagIndex(::System::Collections::Generic::IReadOnlyList_1<::EBDKCHECNEH>* tagInfos, ::System::Int32 searchFrom)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::EBDKCHECNEH>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FINDMATCHINGRUBYRIGHTTAGINDEX_OFFSET))(tagInfos, searchFrom);
		}

		::System::String* ExtractRubyAnnotation(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>* tagAttributes, ::EBDKCHECNEH tagInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>*, ::EBDKCHECNEH))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EXTRACTRUBYANNOTATION_OFFSET))(this, preprocessedText, tagAttributes, tagInfo);
		}

		::System::Boolean TryBuildRubyTagParams(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>* tagAttributes, ::EBDKCHECNEH tagInfo, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams& tagParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>*, ::EBDKCHECNEH, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYBUILDRUBYTAGPARAMS_OFFSET))(this, preprocessedText, tagAttributes, tagInfo, tagParams);
		}

		static ::System::Boolean TryExtractRtAnnotation(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::EBDKCHECNEH>* tagInfos, ::System::Int32 searchFrom, ::System::Int32 searchTo, ::EBDKCHECNEH rubyLeftInfo, ::EBDKCHECNEH rubyRightInfo, ::System::String*& annotation)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::EBDKCHECNEH>*, ::System::Int32, ::System::Int32, ::EBDKCHECNEH, ::EBDKCHECNEH, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYEXTRACTRTANNOTATION_OFFSET))(preprocessedText, tagInfos, searchFrom, searchTo, rubyLeftInfo, rubyRightInfo, annotation);
		}

		static ::System::Boolean TryReadFloatAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>* attributes, ::EBDKCHECNEH tagInfo, ::System::String* name, ::System::Single& value, ::NPCOFEOMEIF& unitType)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>*, ::EBDKCHECNEH, ::System::String*, ::System::Single&, ::NPCOFEOMEIF&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADFLOATATTRIBUTE_OFFSET))(src, attributes, tagInfo, name, value, unitType);
		}

		static ::System::Boolean TryReadColorAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>* attributes, ::EBDKCHECNEH tagInfo, ::System::String* name, ::UnityEngine::Color32& color)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::DACHBCNPGPJ>*, ::EBDKCHECNEH, ::System::String*, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADCOLORATTRIBUTE_OFFSET))(src, attributes, tagInfo, name, color);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshModifier_OnRenderMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET))(this, toFill);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypewriterBindingProvider_CollectTypewriterBindings(::UnityEngine::UI::Extension::UITextTypewriterBinding* typewriterBinding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextTypewriterBinding*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERBINDINGPROVIDER_COLLECTTYPEWRITERBINDINGS_OFFSET))(this, typewriterBinding);
		}

		::System::Void OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void InvalidateGenerators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_INVALIDATEGENERATORS_OFFSET))(this);
		}

		::System::Single GetExtraPreferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETEXTRAPREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Boolean BuildRubyPreferredHeightInputs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYPREFERREDHEIGHTINPUTS_OFFSET))(this);
		}

		static ::System::Boolean TryGetPreferredVisibleRubyBase(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* characters, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* lines, ::System::Int32 lineCount, ::System::String* txt, ::System::Int32 charBeginIndex, ::System::Int32 charEndIndex, ::System::Single unitsPerPixel, ::System::Int32 maxLineLimit, ::System::Int32& lineIndex, ::System::Single& baseWidth)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYGETPREFERREDVISIBLERUBYBASE_OFFSET))(characters, lines, lineCount, txt, charBeginIndex, charEndIndex, unitsPerPixel, maxLineLimit, lineIndex, baseWidth);
		}

		::UnityEngine::TextGenerationSettings BuildRubyFontSettings(::System::Single rubyFontScale)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYFONTSETTINGS_OFFSET))(this, rubyFontScale);
		}

		::System::Int32 GetRubyMaxFontSize(::System::Single rubyFontScale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYMAXFONTSIZE_OFFSET))(this, rubyFontScale);
		}

		::System::Single GetBaseFontSizeForOverhang()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETBASEFONTSIZEFOROVERHANG_OFFSET))(this);
		}

		::System::Single GetUnitsPerPixel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETUNITSPERPIXEL_OFFSET))(this);
		}

		static ::System::Int32 GetLineForCharIndex(::System::Int32 charIdx, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* lines, ::System::Int32 lineCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETLINEFORCHARINDEX_OFFSET))(charIdx, lines, lineCount);
		}

		::System::Void UnityEngine_UI_Extension_IUITextLayoutAdjustmentProvider_CollectLineExtraHeights(::UnityEngine::UI::Extension::IUITextLineExtraHeightWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::IUITextLineExtraHeightWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_COLLECTLINEEXTRAHEIGHTS_OFFSET))(this, writer);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void AppendRubyAnnotationMesh(::UnityEngine::UI::VertexHelper* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDRUBYANNOTATIONMESH_OFFSET))(this, verts);
		}

		::System::Void RecordRubyQuadTextBindings(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData data, ::System::Int32 pendingQuadStart, ::System::Int32 addedQuadCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RECORDRUBYQUADTEXTBINDINGS_OFFSET))(this, charInfos, data, pendingQuadStart, addedQuadCount);
		}

		::System::Void RecordRubyQuadTextBinding(::System::Int32 quadStart, ::System::Int32 quadCount, ::System::Int32 textIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RECORDRUBYQUADTEXTBINDING_OFFSET))(this, quadStart, quadCount, textIndex);
		}

		static ::System::Int32 ResolveTextIndexFromBaseRange(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData data, ::System::Int32 rubyQuadIndex, ::System::Int32 rubyQuadCount)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVETEXTINDEXFROMBASERANGE_OFFSET))(charInfos, data, rubyQuadIndex, rubyQuadCount);
		}

		static ::System::Int32 ResolveTextIndex(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::System::Int32 baseGi)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVETEXTINDEX_OFFSET))(charInfos, baseGi);
		}

		::UnityEngine::Color32 ResolveRubyColorFromTextInfo(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::System::Int32 giBegin, ::System::Int32 giEnd, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::System::Int32, ::System::Int32, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVERUBYCOLORFROMTEXTINFO_OFFSET))(this, charInfos, giBegin, giEnd, tagParams);
		}

		::System::Void GetRubyGenBounds(::System::Single unitsPerPixel, ::System::Single& rubyLeft, ::System::Single& rubyRight, ::System::Single& rubyBottom, ::System::Single& rubyTop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYGENBOUNDS_OFFSET))(this, unitsPerPixel, rubyLeft, rubyRight, rubyBottom, rubyTop);
		}

		::UnityEngine::UI::Extension::RubyFeature_RubyMeasureResult MeasureRubyForBaseWidth(::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams, ::System::Single baseWidth, ::System::Int32 maxFontSize, ::System::Single unitsPerPixel)
		{
			return ((::UnityEngine::UI::Extension::RubyFeature_RubyMeasureResult(*)(::PVOID, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_MEASURERUBYFORBASEWIDTH_OFFSET))(this, tagParams, baseWidth, maxFontSize, unitsPerPixel);
		}

		::UnityEngine::TextGenerationSettings BuildRubyGenerationSettings(::System::Single baseWidth, ::System::Int32 maxFontSize)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYGENERATIONSETTINGS_OFFSET))(this, baseWidth, maxFontSize);
		}

		::System::Boolean PopulateRubyGenerator(::System::String* annotation, ::UnityEngine::TextGenerationSettings rubySettings)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_POPULATERUBYGENERATOR_OFFSET))(this, annotation, rubySettings);
		}

		::System::Single CalcOverhangScale(::System::Single baseWidth, ::System::Single rubyWidth, ::System::Single baseFontSize, ::System::Single unitsPerPixel, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCOVERHANGSCALE_OFFSET))(this, baseWidth, rubyWidth, baseFontSize, unitsPerPixel, tagParams);
		}

		::System::Single CalcRubyHeightOffset(::System::Single fontSize, ::System::Single overhangScale, ::System::Single unitsPerPixel, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCRUBYHEIGHTOFFSET_OFFSET))(this, fontSize, overhangScale, unitsPerPixel, tagParams);
		}

		::System::Void EmitRubyQuads(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* waitAddVert, ::System::Single unitsPerPixel, ::System::Single overhangScale, ::System::Single rubyCenter, ::System::Single rubyBottom, ::System::Single offsetX, ::System::Single offsetY, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EMITRUBYQUADS_OFFSET))(this, waitAddVert, unitsPerPixel, overhangScale, rubyCenter, rubyBottom, offsetX, offsetY, color);
		}

		::System::Void FlushQuads(::UnityEngine::UI::VertexHelper* verts, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* waitAddVert)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FLUSHQUADS_OFFSET))(this, verts, waitAddVert);
		}

		::System::Single GetTotalRubyHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETTOTALRUBYHEIGHT_OFFSET))(this);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void __base_OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_ONCONTENTLOST_OFFSET))(this);
		}
	};
}
