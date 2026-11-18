#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPlugin.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_ECAOHDAHDLL_OFFSET UNITYSDK_OFFSET(0x118F9E90)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_GHJJJKANOAM_OFFSET UNITYSDK_OFFSET(0x118FA3E0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_IMDGANPBNEI_OFFSET UNITYSDK_OFFSET(0x118F9EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_JCNJGPAMKLK_OFFSET UNITYSDK_OFFSET(0x118FA510)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_1_OFFSET UNITYSDK_OFFSET(0x118FA200)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_2_OFFSET UNITYSDK_OFFSET(0x118FA330)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_3_OFFSET UNITYSDK_OFFSET(0x118FA7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_4_OFFSET UNITYSDK_OFFSET(0x118FA940)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_OFFSET UNITYSDK_OFFSET(0x118FA150)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_MNLDADDKOMC_OFFSET UNITYSDK_OFFSET(0x118FA290)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_NMIBBDCBLLE_OFFSET UNITYSDK_OFFSET(0x118F9FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_1_OFFSET UNITYSDK_OFFSET(0x118FA480)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_2_OFFSET UNITYSDK_OFFSET(0x118FA750)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_3_OFFSET UNITYSDK_OFFSET(0x118FA870)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_4_OFFSET UNITYSDK_OFFSET(0x118FA8E0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_5_OFFSET UNITYSDK_OFFSET(0x118FAA00)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_OFFSET UNITYSDK_OFFSET(0x118FA0C0)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_ONMFOCAEDEI_OFFSET UNITYSDK_OFFSET(0x118F9F50)
#define MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x118FA050)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESGeneratedPlugin_TypeDefinitionIndex = 47712;

	class ESGeneratedPlugin : public ::MoleMole::EffectSimulate::ESPlugin
	{
	public:
		::System::Boolean HasBeenSampled; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void ECAOHDAHDLL(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_ECAOHDAHDLL_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void IMDGANPBNEI(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_IMDGANPBNEI_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void ONMFOCAEDEI(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_ONMFOCAEDEI_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void NMIBBDCBLLE(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_NMIBBDCBLLE_OFFSET))(this, HIIOCANBKAM);
		}

		static ::System::Void OANEHDEBJGG(::MoleMole::EffectSimulate::Vector4KeyframeCurve* FAJHPKBELMF, ::UnityEngine::Vector4 OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector4KeyframeCurve*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}

		static ::System::Boolean LNMBAEJENCH(::UnityEngine::Vector4 EJCBEJMGFAJ, ::UnityEngine::Vector4 EBFCACIEKBC, ::System::Single PKHPPCCOKOM)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PKHPPCCOKOM);
		}

		static ::System::Boolean LNMBAEJENCH_1(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::System::Single PKHPPCCOKOM)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PKHPPCCOKOM);
		}

		::System::Void MNLDADDKOMC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_MNLDADDKOMC_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::Boolean LNMBAEJENCH_2(::UnityEngine::Color EJCBEJMGFAJ, ::UnityEngine::Color EBFCACIEKBC, ::System::Single PKHPPCCOKOM)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_2_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PKHPPCCOKOM);
		}

		::System::Void GHJJJKANOAM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_GHJJJKANOAM_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::Void OANEHDEBJGG_1(::MoleMole::EffectSimulate::Vector3KeyframeCurve* FAJHPKBELMF, ::UnityEngine::Vector3 OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector3KeyframeCurve*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_1_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}

		::System::Boolean JCNJGPAMKLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_JCNJGPAMKLK_OFFSET))(this);
		}

		static ::System::Void OANEHDEBJGG_2(::MoleMole::EffectSimulate::BoolKeyframeCurve* FAJHPKBELMF, ::System::Boolean OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::BoolKeyframeCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_2_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}

		static ::System::Boolean LNMBAEJENCH_3(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::System::Single PKHPPCCOKOM)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_3_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PKHPPCCOKOM);
		}

		static ::System::Void OANEHDEBJGG_3(::MoleMole::EffectSimulate::FloatKeyframeCurve* FAJHPKBELMF, ::System::Single OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::FloatKeyframeCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_3_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}

		static ::System::Void OANEHDEBJGG_4(::MoleMole::EffectSimulate::ColorKeyframeCurve* FAJHPKBELMF, ::UnityEngine::Color OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::ColorKeyframeCurve*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_4_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}

		static ::System::Boolean LNMBAEJENCH_4(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single PKHPPCCOKOM)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_LNMBAEJENCH_4_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PKHPPCCOKOM);
		}

		static ::System::Void OANEHDEBJGG_5(::MoleMole::EffectSimulate::Vector2KeyframeCurve* FAJHPKBELMF, ::UnityEngine::Vector2 OJKKJOMGGBG)
		{
			return ((::System::Void(*)(::MoleMole::EffectSimulate::Vector2KeyframeCurve*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGENERATEDPLUGIN_OANEHDEBJGG_5_OFFSET))(FAJHPKBELMF, OJKKJOMGGBG);
		}
	};
}
