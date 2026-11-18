#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_BDLECFLGBFE_OFFSET UNITYSDK_OFFSET(0x162036B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x162039A0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_PHAEJNPDKCH_OFFSET UNITYSDK_OFFSET(0x162039B0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x162036F0)
#define MOLEMOLE_EFFECTSIMULATE_ESGHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x16203930)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESGhost_TypeDefinitionIndex = 52758;

	class ESGhost : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::GameObject* ghostObject; // 0x58
		::UnityEngine::Material* ghostMaterial; // 0x60
		::System::Boolean isFreeFromDeviceControl; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST__CTOR_OFFSET))(this);
		}

		::System::Boolean BDLECFLGBFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_BDLECFLGBFE_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean PHAEJNPDKCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESGHOST_PHAEJNPDKCH_OFFSET))(this);
		}
	};
}
