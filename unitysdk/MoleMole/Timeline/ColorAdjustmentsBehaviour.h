#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorAdjustmentsBehaviour_ILLFIDOGKBB.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_AHHPGONEHAO_OFFSET UNITYSDK_OFFSET(0x18121A40)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x18121500)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18123E80)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x18123EA0)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18122010)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x18123E90)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18121E30)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18123E70)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x181234D0)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x181237C0)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18123E00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorAdjustmentsBehaviour_TypeDefinitionIndex = 89258;

	class ColorAdjustmentsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorAdjustmentsBehaviour_ILLFIDOGKBB _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_sceneExposure; // 0xA1
		::System::Boolean use_sceneExposure; // 0xA2
		::System::Byte _padding0[0x1];
		::System::Single sceneExposure; // 0xA4
		::System::Boolean active_characterExposure; // 0xA8
		::System::Boolean use_characterExposure; // 0xA9
		::System::Byte _padding1[0x2];
		::System::Single characterExposure; // 0xAC
		::System::Boolean active_skyboxExposure; // 0xB0
		::System::Boolean use_skyboxExposure; // 0xB1
		::System::Byte _padding2[0x2];
		::System::Single skyboxExposure; // 0xB4
		::System::Boolean active_postExposure; // 0xB8
		::System::Boolean use_postExposure; // 0xB9
		::System::Byte _padding3[0x2];
		::System::Single postExposure; // 0xBC
		::System::Boolean active_contrast; // 0xC0
		::System::Boolean use_contrast; // 0xC1
		::System::Byte _padding4[0x2];
		::System::Single contrast; // 0xC4
		::System::Boolean active_colorFilter; // 0xC8
		::System::Boolean use_colorFilter; // 0xC9
		::System::Byte _padding5[0x2];
		::UnityEngine::Color colorFilter; // 0xCC
		::System::Boolean active_hueShift; // 0xDC
		::System::Boolean use_hueShift; // 0xDD
		::System::Byte _padding6[0x2];
		::System::Single hueShift; // 0xE0
		::System::Boolean active_saturation; // 0xE4
		::System::Boolean use_saturation; // 0xE5
		::System::Byte _padding7[0x2];
		::System::Single saturation; // 0xE8
		::System::Boolean active_desaturate; // 0xEC
		::System::Boolean use_desaturate; // 0xED
		::System::Byte _padding8[0x2];
		::System::Single desaturate; // 0xF0
		::System::Boolean active_applyLutToSkybox; // 0xF4
		::System::Boolean use_applyLutToSkybox; // 0xF5
		::System::Boolean applyLutToSkybox; // 0xF6
		::System::Boolean active_skySaturation; // 0xF7
		::System::Boolean use_skySaturation; // 0xF8
		::System::Byte _padding9[0x3];
		::System::Single skySaturation; // 0xFC
		::System::Boolean active_skyContrast; // 0x100
		::System::Boolean use_skyContrast; // 0x101
		::System::Byte _padding10[0x2];
		::System::Single skyContrast; // 0x104
		::System::Boolean active_FXLutTexture; // 0x108
		::System::Boolean use_FXLutTexture; // 0x109
		::System::Byte _padding11[0x6];
		::UnityEngine::Texture* FXLutTexture; // 0x110
		::System::Boolean active_FXExposure; // 0x118
		::System::Boolean use_FXExposure; // 0x119
		::System::Byte _padding12[0x2];
		::System::Single FXExposure; // 0x11C
		::System::Boolean active_UseSceneDesaturateMask; // 0x120
		::System::Boolean use_UseSceneDesaturateMask; // 0x121
		::System::Boolean UseSceneDesaturateMask; // 0x122
		::System::Byte _padding13[0x5];
		::UnityEngine::Rendering::Universal::ColorAdjustments* _ColorAdjustments; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::ColorAdjustments* AHHPGONEHAO(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ColorAdjustments*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_AHHPGONEHAO_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
