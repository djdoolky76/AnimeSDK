#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeBehavior.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_GET_RANDOMVAL_OFFSET UNITYSDK_OFFSET(0xFFF7E80)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_LOGMLJPCMEP_OFFSET UNITYSDK_OFFSET(0xFFF7ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_SET_RANDOMVAL_OFFSET UNITYSDK_OFFSET(0xFFF7EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF7EB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitTransformBehavior_TypeDefinitionIndex = 92965;

	class ESEmptyNodeInitTransformBehavior : public ::MoleMole::EffectSimulate::ESEmptyNodeBehavior
	{
	public:
		::UnityEngine::Vector3 minVal; // 0x48
		::UnityEngine::Vector3 maxVal; // 0x54
		::UnityEngine::Vector3 _randomVal_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_randomVal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_GET_RANDOMVAL_OFFSET))(this);
		}

		::System::Void set_randomVal(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_SET_RANDOMVAL_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector3 LOGMLJPCMEP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_LOGMLJPCMEP_OFFSET))(this);
		}
	};
}
