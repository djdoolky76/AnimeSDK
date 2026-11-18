#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESGeneratedPlugin.h"

class VolumetricMist;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_BEAOLNJFLBL_OFFSET UNITYSDK_OFFSET(0x12441850)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_CEJICMBMBNJ_OFFSET UNITYSDK_OFFSET(0x124411B0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_DFABLGKFBDO_OFFSET UNITYSDK_OFFSET(0x12441630)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_FFKHIHLMJCD_OFFSET UNITYSDK_OFFSET(0x12441810)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_FNFNKLBOOCE_OFFSET UNITYSDK_OFFSET(0x12441BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x12441C70)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12441B50)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_OMGBHAKAGLE_OFFSET UNITYSDK_OFFSET(0x12441AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12441030)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x12440D00)
#define MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12441890)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVolumetricMist_TypeDefinitionIndex = 58836;

	class ESVolumetricMist : public ::MoleMole::EffectSimulate::ESGeneratedPlugin
	{
	public:
		// static const ::System::Int32 DrawOrder = 0x14; // 0x0
		::VolumetricMist* _volumetricMist; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistDensityCurve; // 0x68
		::System::Single _volumetricMistDensityLastValue; // 0x70
		::System::Boolean _volumetricMistDensityChanged; // 0x74
		::System::Byte _padding0[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistCoverageCurve; // 0x78
		::System::Single _volumetricMistCoverageLastValue; // 0x80
		::System::Boolean _volumetricMistCoverageChanged; // 0x84
		::System::Byte _padding1[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* volumetricMistFallOffCurve; // 0x88
		::System::Single _volumetricMistFallOffLastValue; // 0x90
		::System::Boolean _volumetricMistFallOffChanged; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean DIDLBDBOCEN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_PHOADBJGFBE_OFFSET))(this, DIDLBDBOCEN);
		}

		::System::Void CEJICMBMBNJ(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_CEJICMBMBNJ_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void DFABLGKFBDO(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_DFABLGKFBDO_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Boolean FFKHIHLMJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_FFKHIHLMJCD_OFFSET))(this);
		}

		::System::Boolean BEAOLNJFLBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_BEAOLNJFLBL_OFFSET))(this);
		}

		::System::Boolean OMGBHAKAGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_OMGBHAKAGLE_OFFSET))(this);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean FNFNKLBOOCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_FNFNKLBOOCE_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVOLUMETRICMIST_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
