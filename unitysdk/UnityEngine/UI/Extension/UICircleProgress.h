#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYDIVIDE_OFFSET UNITYSDK_OFFSET(0x194D0620)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYOUTLINE_OFFSET UNITYSDK_OFFSET(0x194D0740)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYPROGRESS_OFFSET UNITYSDK_OFFSET(0x194D0480)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYRAMP_OFFSET UNITYSDK_OFFSET(0x194D0850)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x194CF8F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x194D11D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x194D0E70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPATPROGRESS0_OFFSET UNITYSDK_OFFSET(0x194CE350)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPPROGRESS_OFFSET UNITYSDK_OFFSET(0x194CE3E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x194CE120)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDELINEWIDTH_OFFSET UNITYSDK_OFFSET(0x194CE810)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDES_OFFSET UNITYSDK_OFFSET(0x194CE780)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDE_OFFSET UNITYSDK_OFFSET(0x194CE6F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTHFADE_OFFSET UNITYSDK_OFFSET(0x194CE590)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTH_OFFSET UNITYSDK_OFFSET(0x194CE4C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x194CEB20)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x194CEA40)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CF4E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPMIRROR_OFFSET UNITYSDK_OFFSET(0x194CF780)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x194CF6A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSPEED_OFFSET UNITYSDK_OFFSET(0x194CF810)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x194CF400)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPTILING_OFFSET UNITYSDK_OFFSET(0x194CF5C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINE_OFFSET UNITYSDK_OFFSET(0x194CE9B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x194CE280)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPCUSTOMANGLE_OFFSET UNITYSDK_OFFSET(0x194CED10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPDIRECTION_OFFSET UNITYSDK_OFFSET(0x194CEC80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CEFF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPFOLLOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x194CEDF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPMIRROR_OFFSET UNITYSDK_OFFSET(0x194CF290)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x194CF1B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSPEED_OFFSET UNITYSDK_OFFSET(0x194CF320)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x194CEF10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPTILING_OFFSET UNITYSDK_OFFSET(0x194CF0D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMP_OFFSET UNITYSDK_OFFSET(0x194CEBF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_ROUNDCAP_OFFSET UNITYSDK_OFFSET(0x194CE660)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_SMOOTHALPHARAMP_OFFSET UNITYSDK_OFFSET(0x194CEE80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x194CE1B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_UNFINISHEDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CE8E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x194D13B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x194D0100)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x194CFF80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x194D0040)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194CFAE0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x194CFEF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194CFA90)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x194CFD70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x194CFE30)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x194CF980)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPATPROGRESS0_OFFSET UNITYSDK_OFFSET(0x194CE360)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPPROGRESS_OFFSET UNITYSDK_OFFSET(0x194CE3F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x194CE130)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDELINEWIDTH_OFFSET UNITYSDK_OFFSET(0x194CE820)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDES_OFFSET UNITYSDK_OFFSET(0x194CE790)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDE_OFFSET UNITYSDK_OFFSET(0x194CE700)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTHFADE_OFFSET UNITYSDK_OFFSET(0x194CE5A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTH_OFFSET UNITYSDK_OFFSET(0x194CE4D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x194CEB30)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x194CEA50)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CF4F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPMIRROR_OFFSET UNITYSDK_OFFSET(0x194CF790)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x194CF6B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSPEED_OFFSET UNITYSDK_OFFSET(0x194CF820)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x194CF410)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPTILING_OFFSET UNITYSDK_OFFSET(0x194CF5D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINE_OFFSET UNITYSDK_OFFSET(0x194CE9C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x194CE290)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPCUSTOMANGLE_OFFSET UNITYSDK_OFFSET(0x194CED20)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPDIRECTION_OFFSET UNITYSDK_OFFSET(0x194CEC90)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPENDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CF000)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPFOLLOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x194CEE00)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPMIRROR_OFFSET UNITYSDK_OFFSET(0x194CF2A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x194CF1C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSPEED_OFFSET UNITYSDK_OFFSET(0x194CF330)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x194CEF20)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPTILING_OFFSET UNITYSDK_OFFSET(0x194CF0E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMP_OFFSET UNITYSDK_OFFSET(0x194CEC00)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_ROUNDCAP_OFFSET UNITYSDK_OFFSET(0x194CE670)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_SMOOTHALPHARAMP_OFFSET UNITYSDK_OFFSET(0x194CEE90)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x194CE1C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_UNFINISHEDCOLOR_OFFSET UNITYSDK_OFFSET(0x194CE8F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_START_OFFSET UNITYSDK_OFFSET(0x194CFA20)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x194D1500)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x194D13F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x194D1930)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x194D19C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194D1A50)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x194D1AE0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194D1AF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x194D1B00)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x194D1B90)
#define UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_START_OFFSET UNITYSDK_OFFSET(0x194D1C20)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICircleProgress_TypeDefinitionIndex = 55477;

	class UICircleProgress : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_RampDirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0x39F30);
		}
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0x39F38);
		}
		static ::System::Int32* StaticGet_OutlineRampStartColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD380);
		}
		static ::System::Int32* StaticGet_OutlineRampEndColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD384);
		}
		static ::System::Int32* StaticGet_RampDirectionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD388);
		}
		static ::System::Int32* StaticGet_OutlinePercentagePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD38C);
		}
		static ::System::Int32* StaticGet_DividePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD390);
		}
		static ::System::Int32* StaticGet_StartRoundCapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD394);
		}
		static ::System::Int32* StaticGet_EndRoundCapPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD398);
		}
		static ::System::Int32* StaticGet_DirectionParamsPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD39C);
		}
		static ::System::Int32* StaticGet_RampTilingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3A0);
		}
		static ::System::Int32* StaticGet_OutlineRampSpeedPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3A4);
		}
		static ::System::Int32* StaticGet_RampOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3A8);
		}
		static ::System::Int32* StaticGet_OutlineColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3AC);
		}
		static ::System::Int32* StaticGet_DividesPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3B0);
		}
		static ::System::Int32* StaticGet_RampEndColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3B4);
		}
		static ::System::Int32* StaticGet_OutlinePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3B8);
		}
		static ::System::Int32* StaticGet_RampStartColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3BC);
		}
		static ::System::Int32* StaticGet_RampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3C0);
		}
		static ::System::Int32* StaticGet_RampSpeedPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3C4);
		}
		static ::System::Int32* StaticGet_ProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3C8);
		}
		static ::System::Int32* StaticGet_DirectionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3CC);
		}
		static ::System::Int32* StaticGet_SmoothAlphaRampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3D0);
		}
		static ::System::Int32* StaticGet_UnfinishedColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3D4);
		}
		static ::System::Int32* StaticGet_OutlineRampOffsetPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3D8);
		}
		static ::System::Int32* StaticGet_InnerWidthFadePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3DC);
		}
		static ::System::Int32* StaticGet_DivideLineWidthPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		static ::System::Int32* StaticGet_ClipProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3E4);
		}
		static ::System::Int32* StaticGet_StartAnglePropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3E8);
		}
		static ::System::Int32* StaticGet_ClipAtProgress0PropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3EC);
		}
		static ::System::Int32* StaticGet_RampFollowProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3F0);
		}
		static ::System::Int32* StaticGet_InnerWidthPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3F4);
		}
		static ::System::Int32* StaticGet_OutlineRampTilingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3F8);
		}
		static ::System::Int32* StaticGet_RampMirrorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD3FC);
		}
		static ::System::Int32* StaticGet_OutlineRampMirrorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleProgress_TypeDefinitionIndex)->GetStaticField(0xD400);
		}
		// static const ::System::String* UICircleProgressMatPath; // 0x0
		// static const ::System::String* StartRoundCapKeyword; // 0x0
		// static const ::System::String* EndRoundCapKeyword; // 0x0
		// static const ::System::String* DivideKeyword; // 0x0
		// static const ::System::String* OutlineKeyword; // 0x0
		// static const ::System::String* RampKeyword; // 0x0
		// static const ::System::String* RampFollowProgressKeyword; // 0x0
		// static const ::System::String* RampUKeyword; // 0x0
		// static const ::System::String* RampVKeyword; // 0x0
		// static const ::System::String* RampCustomKeyword; // 0x0
		::System::Int32 direction; // 0x20
		::System::Single startAngle; // 0x24
		::System::Single progress; // 0x28
		::System::Boolean clipAtProgress0; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single clipProgress; // 0x30
		::System::Single innerWidth; // 0x34
		::System::Single innerWidthFade; // 0x38
		::System::Boolean roundCap; // 0x3C
		::System::Boolean divide; // 0x3D
		::System::Byte _padding1[0x2];
		::System::Int32 divides; // 0x40
		::System::Single divideLineWidth; // 0x44
		::UnityEngine::Color unfinishedColor; // 0x48
		::System::Boolean outline; // 0x58
		::System::Byte _padding2[0x3];
		::System::Single outlinePercentage; // 0x5C
		::UnityEngine::Color outlineColor; // 0x60
		::System::Boolean ramp; // 0x70
		::System::Byte _padding3[0x3];
		::System::Int32 rampDirection; // 0x74
		::System::Single rampCustomAngle; // 0x78
		::System::Boolean rampFollowProgress; // 0x7C
		::System::Boolean smoothAlphaRamp; // 0x7D
		::System::Byte _padding4[0x2];
		::UnityEngine::Color rampStartColor; // 0x80
		::UnityEngine::Color rampEndColor; // 0x90
		::System::Single rampTiling; // 0xA0
		::System::Single rampOffset; // 0xA4
		::System::Boolean rampMirror; // 0xA8
		::System::Byte _padding5[0x3];
		::System::Single rampSpeed; // 0xAC
		::UnityEngine::Color outlineRampStartColor; // 0xB0
		::UnityEngine::Color outlineRampEndColor; // 0xC0
		::System::Single outlineRampTiling; // 0xD0
		::System::Single outlineRampOffset; // 0xD4
		::System::Boolean outlineRampMirror; // 0xD8
		::System::Byte _padding6[0x3];
		::System::Single outlineRampSpeed; // 0xDC
		::UnityEngine::Material* _modifiedMaterial; // 0xE0
		::System::Boolean _isLoadedMaterial; // 0xE8
		::System::Byte _padding7[0x7];
		::Foundation::AssetRequestHandle _uiCircleProgressMatHandle; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS__CCTOR_OFFSET))();
		}

		::System::Int32 get_Direction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Single get_StartAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_STARTANGLE_OFFSET))(this);
		}

		::System::Void set_StartAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_STARTANGLE_OFFSET))(this, value);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_ClipAtProgress0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPATPROGRESS0_OFFSET))(this);
		}

		::System::Void set_ClipAtProgress0(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPATPROGRESS0_OFFSET))(this, value);
		}

		::System::Single get_ClipProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_CLIPPROGRESS_OFFSET))(this);
		}

		::System::Void set_ClipProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_CLIPPROGRESS_OFFSET))(this, value);
		}

		::System::Single get_InnerWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTH_OFFSET))(this);
		}

		::System::Void set_InnerWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTH_OFFSET))(this, value);
		}

		::System::Single get_InnerWidthFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_INNERWIDTHFADE_OFFSET))(this);
		}

		::System::Void set_InnerWidthFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_INNERWIDTHFADE_OFFSET))(this, value);
		}

		::System::Boolean get_RoundCap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_ROUNDCAP_OFFSET))(this);
		}

		::System::Void set_RoundCap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_ROUNDCAP_OFFSET))(this, value);
		}

		::System::Boolean get_Divide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDE_OFFSET))(this);
		}

		::System::Void set_Divide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDE_OFFSET))(this, value);
		}

		::System::Int32 get_Divides()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDES_OFFSET))(this);
		}

		::System::Void set_Divides(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDES_OFFSET))(this, value);
		}

		::System::Single get_DivideLineWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_DIVIDELINEWIDTH_OFFSET))(this);
		}

		::System::Void set_DivideLineWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_DIVIDELINEWIDTH_OFFSET))(this, value);
		}

		::UnityEngine::Color get_UnfinishedColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_UNFINISHEDCOLOR_OFFSET))(this);
		}

		::System::Void set_UnfinishedColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_UNFINISHEDCOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Outline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINE_OFFSET))(this);
		}

		::System::Void set_Outline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINE_OFFSET))(this, value);
		}

		::System::Single get_OutlinePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINEPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_OutlinePercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINEPERCENTAGE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINECOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINECOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Ramp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMP_OFFSET))(this);
		}

		::System::Void set_Ramp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMP_OFFSET))(this, value);
		}

		::System::Int32 get_RampDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPDIRECTION_OFFSET))(this);
		}

		::System::Void set_RampDirection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_RampCustomAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPCUSTOMANGLE_OFFSET))(this);
		}

		::System::Void set_RampCustomAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPCUSTOMANGLE_OFFSET))(this, value);
		}

		::System::Boolean get_RampFollowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPFOLLOWPROGRESS_OFFSET))(this);
		}

		::System::Void set_RampFollowProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPFOLLOWPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_SmoothAlphaRamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_SMOOTHALPHARAMP_OFFSET))(this);
		}

		::System::Void set_SmoothAlphaRamp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_SMOOTHALPHARAMP_OFFSET))(this, value);
		}

		::UnityEngine::Color get_RampStartColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSTARTCOLOR_OFFSET))(this);
		}

		::System::Void set_RampStartColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSTARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_RampEndColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPENDCOLOR_OFFSET))(this);
		}

		::System::Void set_RampEndColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPENDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_RampTiling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPTILING_OFFSET))(this);
		}

		::System::Void set_RampTiling(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPTILING_OFFSET))(this, value);
		}

		::System::Single get_RampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_RampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_RampMirror()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPMIRROR_OFFSET))(this);
		}

		::System::Void set_RampMirror(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPMIRROR_OFFSET))(this, value);
		}

		::System::Single get_RampSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_RAMPSPEED_OFFSET))(this);
		}

		::System::Void set_RampSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_RAMPSPEED_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineRampStartColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSTARTCOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineRampStartColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSTARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_OutlineRampEndColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPENDCOLOR_OFFSET))(this);
		}

		::System::Void set_OutlineRampEndColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPENDCOLOR_OFFSET))(this, value);
		}

		::System::Single get_OutlineRampTiling()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPTILING_OFFSET))(this);
		}

		::System::Void set_OutlineRampTiling(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPTILING_OFFSET))(this, value);
		}

		::System::Single get_OutlineRampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_OutlineRampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_OutlineRampMirror()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPMIRROR_OFFSET))(this);
		}

		::System::Void set_OutlineRampMirror(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPMIRROR_OFFSET))(this, value);
		}

		::System::Single get_OutlineRampSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GET_OUTLINERAMPSPEED_OFFSET))(this);
		}

		::System::Void set_OutlineRampSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SET_OUTLINERAMPSPEED_OFFSET))(this, value);
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_SETDIRTY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ApplyProgress(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYPROGRESS_OFFSET))(this, material);
		}

		::System::Void ApplyDivide(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYDIVIDE_OFFSET))(this, material);
		}

		::System::Void ApplyOutline(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYOUTLINE_OFFSET))(this, material);
		}

		::System::Void ApplyRamp(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_APPLYRAMP_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLEPROGRESS___BASE_START_OFFSET))(this);
		}
	};
}
