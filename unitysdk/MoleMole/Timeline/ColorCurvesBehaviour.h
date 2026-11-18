#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorCurvesBehaviour_EIKFIMKKLKD.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x198D6910)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198D8190)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_HMLBMOHAHEG_OFFSET UNITYSDK_OFFSET(0x198D6BE0)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x198D81B0)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x198D7100)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x198D8180)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198D6FD0)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198D81A0)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198D7C20)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x198D7E60)
#define MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198D8170)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorCurvesBehaviour_TypeDefinitionIndex = 68230;

	class ColorCurvesBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorCurvesBehaviour_EIKFIMKKLKD _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_master; // 0xA1
		::System::Boolean use_master; // 0xA2
		::System::Byte _padding0[0x5];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0xA8
		::System::Boolean active_red; // 0xB0
		::System::Boolean use_red; // 0xB1
		::System::Byte _padding1[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0xB8
		::System::Boolean active_green; // 0xC0
		::System::Boolean use_green; // 0xC1
		::System::Byte _padding2[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0xC8
		::System::Boolean active_blue; // 0xD0
		::System::Boolean use_blue; // 0xD1
		::System::Byte _padding3[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0xD8
		::System::Boolean active_hueVsHue; // 0xE0
		::System::Boolean use_hueVsHue; // 0xE1
		::System::Byte _padding4[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0xE8
		::System::Boolean active_hueVsSat; // 0xF0
		::System::Boolean use_hueVsSat; // 0xF1
		::System::Byte _padding5[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0xF8
		::System::Boolean active_satVsSat; // 0x100
		::System::Boolean use_satVsSat; // 0x101
		::System::Byte _padding6[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x108
		::System::Boolean active_lumVsSat; // 0x110
		::System::Boolean use_lumVsSat; // 0x111
		::System::Byte _padding7[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x118
		::UnityEngine::Rendering::Universal::ColorCurves* _ColorCurves; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::ColorCurves* HMLBMOHAHEG(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ColorCurves*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESBEHAVIOUR_HMLBMOHAHEG_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
