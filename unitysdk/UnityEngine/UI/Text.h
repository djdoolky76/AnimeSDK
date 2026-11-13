#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextFormattingTag.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class FontData; }
namespace UnityEngine::UI { class RampData; }
namespace UnityEngine::UI { class Text_ITextIcons; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x20689160)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x2068BD90)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x2068BDA0)
#define UNITYENGINE_UI_TEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x2068D860)
#define UNITYENGINE_UI_TEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x20686130)
#define UNITYENGINE_UI_TEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x20686000)
#define UNITYENGINE_UI_TEXT_CULL_OFFSET UNITYSDK_OFFSET(0x20688E10)
#define UNITYENGINE_UI_TEXT_FILLVERTICES_OFFSET UNITYSDK_OFFSET(0x2068B120)
#define UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x20686E10)
#define UNITYENGINE_UI_TEXT_GETCUSTOMGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x20689590)
#define UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x20689220)
#define UNITYENGINE_UI_TEXT_GETPREFERREDHEIGHTALLSCALEFACTORS_OFFSET UNITYSDK_OFFSET(0x2068D220)
#define UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET UNITYSDK_OFFSET(0x206897B0)
#define UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x20687F00)
#define UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x20687DD0)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET UNITYSDK_OFFSET(0x206861D0)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x20686150)
#define UNITYENGINE_UI_TEXT_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0x20686AF0)
#define UNITYENGINE_UI_TEXT_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x20686870)
#define UNITYENGINE_UI_TEXT_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0x206869B0)
#define UNITYENGINE_UI_TEXT_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x206867D0)
#define UNITYENGINE_UI_TEXT_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0x20686B90)
#define UNITYENGINE_UI_TEXT_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x20686910)
#define UNITYENGINE_UI_TEXT_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0x20686A50)
#define UNITYENGINE_UI_TEXT_GET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x2068BD70)
#define UNITYENGINE_UI_TEXT_GET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x206878D0)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x2068D840)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x2068C0B0)
#define UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x20687FD0)
#define UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x206884A0)
#define UNITYENGINE_UI_TEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x20686FD0)
#define UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x20688100)
#define UNITYENGINE_UI_TEXT_GET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x206885D0)
#define UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x2068D850)
#define UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x20688360)
#define UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x20686370)
#define UNITYENGINE_UI_TEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x2068C0D0)
#define UNITYENGINE_UI_TEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x2068C0E0)
#define UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x2068C0C0)
#define UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x2068BDB0)
#define UNITYENGINE_UI_TEXT_GET_M_TEMPVERTS_OFFSET UNITYSDK_OFFSET(0x206897D0)
#define UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x206887E0)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x2068C110)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x2068BDC0)
#define UNITYENGINE_UI_TEXT_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x20686D70)
#define UNITYENGINE_UI_TEXT_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x20686C30)
#define UNITYENGINE_UI_TEXT_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x20686CD0)
#define UNITYENGINE_UI_TEXT_GET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x2068C0F0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x20687A30)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x206878F0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x20687CA0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x20687B70)
#define UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x20687790)
#define UNITYENGINE_UI_TEXT_GET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x20688700)
#define UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x206870A0)
#define UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x20688230)
#define UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20686250)
#define UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20688BE0)
#define UNITYENGINE_UI_TEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20688AC0)
#define UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x206898E0)
#define UNITYENGINE_UI_TEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x20687780)
#define UNITYENGINE_UI_TEXT_REPLACEENDWITHELLIPSIS_OFFSET UNITYSDK_OFFSET(0x2068A870)
#define UNITYENGINE_UI_TEXT_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x20688FD0)
#define UNITYENGINE_UI_TEXT_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x20688D40)
#define UNITYENGINE_UI_TEXT_SETNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x206872D0)
#define UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x20687F20)
#define UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x20687DF0)
#define UNITYENGINE_UI_TEXT_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0x20686B00)
#define UNITYENGINE_UI_TEXT_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x20686880)
#define UNITYENGINE_UI_TEXT_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0x206869C0)
#define UNITYENGINE_UI_TEXT_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x206867E0)
#define UNITYENGINE_UI_TEXT_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0x20686BA0)
#define UNITYENGINE_UI_TEXT_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x20686920)
#define UNITYENGINE_UI_TEXT_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0x20686A60)
#define UNITYENGINE_UI_TEXT_SET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x2068BD80)
#define UNITYENGINE_UI_TEXT_SET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x206878E0)
#define UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x20687FF0)
#define UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x206884C0)
#define UNITYENGINE_UI_TEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x20686FF0)
#define UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x20688120)
#define UNITYENGINE_UI_TEXT_SET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x206885F0)
#define UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x20688380)
#define UNITYENGINE_UI_TEXT_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x20686D80)
#define UNITYENGINE_UI_TEXT_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x20686C40)
#define UNITYENGINE_UI_TEXT_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x20686CE0)
#define UNITYENGINE_UI_TEXT_SET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x2068C100)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x20687A50)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x20687910)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x20687CC0)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x20687B90)
#define UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x206877B0)
#define UNITYENGINE_UI_TEXT_SET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x20688710)
#define UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x206870B0)
#define UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x20688250)
#define UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x20689070)
#define UNITYENGINE_UI_TEXT_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x20689120)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Text_TypeDefinitionIndex = 6874;

	class Text : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::UI::FontData* m_FontData; // 0xF0
		::System::String* m_Text; // 0xF8
		::System::Boolean m_EnableUnderline; // 0x100
		::System::Byte _padding0[0x7];
		::UnityEngine::TextGenerator* m_TextCache; // 0x108
		::UnityEngine::TextGenerator* m_TextCacheForLayout; // 0x110
		::System::Boolean m_needForceUpdate; // 0x118
		::System::Boolean m_DisableFontTextureRebuiltCallback; // 0x119
		::System::Byte _padding1[0x2];
		::UnityEngine::UI::ColorMode m_ColorMode; // 0x11C
		::UnityEngine::UI::RampData* m_RampData; // 0x120
		::UnityEngine::Color m_RampColorLeft; // 0x128
		::UnityEngine::Color m_RampColorRight; // 0x138
		::UnityEngine::Color m_4RampColorLB; // 0x148
		::UnityEngine::Color m_4RampColorRB; // 0x158
		::System::Single m_RampRotation; // 0x168
		::System::Single m_RampScale; // 0x16C
		::System::Single m_RampOffset; // 0x170
		::System::Single m_TextureScale; // 0x174
		::Il2CppArray<::UnityEngine::UIVertex>* tempVerts; // 0x178
		::System::Char m_EllipsisChar; // 0x180
		::System::Boolean _requireTextFormatFlags_k__BackingField; // 0x182
		::System::Boolean usingRuntimeAtlas; // 0x183
		::System::Byte _padding2[0x4];
		::UnityEngine::UI::Text_ITextIcons* m_Icons; // 0x188
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>** StaticGet_textGeneratorPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>**)UnitySDK::FromName("UnityEngine.UI", "Text")->GetStaticField(0x32670);
		}

		static ::UnityEngine::Material** StaticGet_s_DefaultText()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.UI", "Text")->GetStaticField(0x32678);
		}

		static ::System::Boolean* StaticGet_tempFixEllipsis()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.UI", "Text")->GetStaticField(0x9C40);
		}

		// static const ::System::String* _ELLIPSIS_APENDIX; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CCTOR_OFFSET))();
		}

		static ::System::Void Clear(::UnityEngine::TextGenerator* a1)
		{
			return ((::System::Void(*)(::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CLEAR_OFFSET))(a1);
		}

		::UnityEngine::TextGenerator* get_cachedTextGenerator()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::UI::ColorMode get_colorMode()
		{
			return ((::UnityEngine::UI::ColorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORMODE_OFFSET))(this);
		}

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLB_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRB_OFFSET))(this, a1);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPROTATION_OFFSET))(this, a1);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPSCALE_OFFSET))(this, a1);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPOFFSET_OFFSET))(this, a1);
		}

		::System::Void FontTextureChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET))(this);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONT_OFFSET))(this, a1);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void SetNativeString(::UnityEngine::NativeStringRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETNATIVESTRING_OFFSET))(this, a1);
		}

		::System::Void OnTextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONTEXTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_supportRichText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET))(this);
		}

		::System::Void set_supportRichText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_enableUnderline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ENABLEUNDERLINE_OFFSET))(this);
		}

		::System::Void set_enableUnderline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ENABLEUNDERLINE_OFFSET))(this, a1);
		}

		::System::Boolean get_resizeTextForBestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET))(this);
		}

		::System::Void set_resizeTextForBestFit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET))(this, a1);
		}

		::System::Boolean get_resizeTextAllowHorizontalWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET))(this);
		}

		::System::Void set_resizeTextAllowHorizontalWrap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET))(this, a1);
		}

		::System::Int32 get_resizeTextMinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMinSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_resizeTextMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMaxSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_alignByGeometry(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET))(this, a1);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::HorizontalWrapMode get_horizontalOverflow()
		{
			return ((::UnityEngine::HorizontalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HorizontalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET))(this, a1);
		}

		::UnityEngine::VerticalWrapMode get_verticalOverflow()
		{
			return ((::UnityEngine::VerticalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VerticalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET))(this, a1);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET))(this, a1);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET))(this, a1);
		}

		::UnityEngine::TextFormattingTag get_invalidTag()
		{
			return ((::UnityEngine::TextFormattingTag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_INVALIDTAG_OFFSET))(this);
		}

		::System::Void set_invalidTag(::UnityEngine::TextFormattingTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormattingTag))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_INVALIDTAG_OFFSET))(this, a1);
		}

		::System::Single get_textureScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXTURESCALE_OFFSET))(this);
		}

		::System::Void set_textureScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXTURESCALE_OFFSET))(this, a1);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void AssignDefaultFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings GetGenerationSettings(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET))(this, a1);
		}

		::UnityEngine::TextGenerationSettings GetCustomGenerationSettings(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETCUSTOMGENERATIONSETTINGS_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 GetTextAnchorPivot(::UnityEngine::TextAnchor a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET))(a1);
		}

		::Il2CppArray<::UnityEngine::UIVertex>* get_m_TempVerts()
		{
			return ((::Il2CppArray<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_M_TEMPVERTS_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void FillVertices(::UnityEngine::UI::VertexHelper* a1, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FILLVERTICES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Char get_ellipsisChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ELLIPSISCHAR_OFFSET))(this);
		}

		::System::Void set_ellipsisChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ELLIPSISCHAR_OFFSET))(this, a1);
		}

		::System::Boolean ReplaceEndWithEllipsis(::UnityEngine::TextGenerationSettings a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextGenerationSettings, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_REPLACEENDWITHELLIPSIS_OFFSET))(this, a1, a2);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Boolean get_requireTextFormatFlags()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_REQUIRETEXTFORMATFLAGS_OFFSET))(this);
		}

		::System::Void set_requireTextFormatFlags(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_REQUIRETEXTFORMATFLAGS_OFFSET))(this, a1);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetPreferredHeightAllScaleFactors(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETPREFERREDHEIGHTALLSCALEFACTORS_OFFSET))(this, a1);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

	};
}
