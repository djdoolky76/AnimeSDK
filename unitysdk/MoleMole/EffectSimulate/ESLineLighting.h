#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class LineLighting;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x142D0440)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_HMMEALPCJPH_OFFSET UNITYSDK_OFFSET(0x142CFBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_IJABPPNBIJK_OFFSET UNITYSDK_OFFSET(0x142D05F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x142D05E0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x142D06B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x142CFEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x142CF5F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x142D04E0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x142D04F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLineLighting_TypeDefinitionIndex = 61088;

	class ESLineLighting : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::LineLighting* m_stLightingCom; // 0x58
		::UnityEngine::LineRenderer* m_stLineRenderer; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* lineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void HMMEALPCJPH(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_HMMEALPCJPH_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::LineLighting* get_wrapperComShower()
		{
			return ((::LineLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::LineLighting* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::LineLighting*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_SET_WRAPPERCOMSHOWER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void IJABPPNBIJK(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_IJABPPNBIJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
