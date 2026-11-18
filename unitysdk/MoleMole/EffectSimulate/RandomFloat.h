#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_GET_CANUSERANDOM_OFFSET UNITYSDK_OFFSET(0x1B90A8D0)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_HFOCKIPFMFG_OFFSET UNITYSDK_OFFSET(0x1B90A9A0)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_LOGMLJPCMEP_OFFSET UNITYSDK_OFFSET(0x1B90AA00)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_MJAKPCAPFNJ_OFFSET UNITYSDK_OFFSET(0x1B90A950)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_SET_CANUSERANDOM_OFFSET UNITYSDK_OFFSET(0x1B90A8E0)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90A940)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int RandomFloat_TypeDefinitionIndex = 87965;

	class RandomFloat : public ::System::Object
	{
	public:
		// static const ::System::String* HOR_GROUP_NAME; // 0x0
		::System::Single baseVal; // 0x10
		::System::Single randomMaxVal; // 0x14
		::System::Boolean isRandom; // 0x18
		::System::Boolean _canUseRandom; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_canUseRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_GET_CANUSERANDOM_OFFSET))(this);
		}

		::System::Void set_canUseRandom(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_SET_CANUSERANDOM_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MJAKPCAPFNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_MJAKPCAPFNJ_OFFSET))(this);
		}

		::System::Single HFOCKIPFMFG(::System::Single EGEGIMGMJHN, ::UnityEngine::GUIContent* GFKCABHFFEE, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>* BAOCFOGKBML)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::GUIContent*, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_HFOCKIPFMFG_OFFSET))(this, EGEGIMGMJHN, GFKCABHFFEE, BAOCFOGKBML);
		}

		::System::Single LOGMLJPCMEP(::System::Single JBHANCEFNHE)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_LOGMLJPCMEP_OFFSET))(this, JBHANCEFNHE);
		}
	};
}
