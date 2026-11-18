#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class LineLightingV2;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x16204890)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_HMMEALPCJPH_OFFSET UNITYSDK_OFFSET(0x16204040)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_IJABPPNBIJK_OFFSET UNITYSDK_OFFSET(0x16204A30)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x16204AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16204B00)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x162042F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x16203A40)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x16204930)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x16204940)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLineLightingV2_TypeDefinitionIndex = 88867;

	class ESLineLightingV2 : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::LineLightingV2* m_stLightingCom; // 0x58
		::UnityEngine::LineRenderer* m_stLineRenderer; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* lineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void HMMEALPCJPH(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_HMMEALPCJPH_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::LineLightingV2* get_wrapperComShower()
		{
			return ((::LineLightingV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::LineLightingV2* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::LineLightingV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_SET_WRAPPERCOMSHOWER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void IJABPPNBIJK(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_IJABPPNBIJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
