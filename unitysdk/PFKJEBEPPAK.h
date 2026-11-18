#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::EventSystems { class BaseInput; }

#define PFKJEBEPPAK_AKAGAJECGOD_OFFSET UNITYSDK_OFFSET(0x13A91C10)
#define PFKJEBEPPAK_DJOEPPAJAHA_OFFSET UNITYSDK_OFFSET(0x13A921B0)
#define PFKJEBEPPAK_LINJIKAIOFL_1_OFFSET UNITYSDK_OFFSET(0x13A91CA0)
#define PFKJEBEPPAK_LINJIKAIOFL_OFFSET UNITYSDK_OFFSET(0x13A91B90)
#define PFKJEBEPPAK_MONLFOOAMPF_OFFSET UNITYSDK_OFFSET(0x13A92270)

inline static constexpr unsigned int PFKJEBEPPAK_TypeDefinitionIndex = 43923;

class PFKJEBEPPAK : public ::System::Object
{
public:
	static ::System::Boolean LINJIKAIOFL(::UnityEngine::Touch JMFPCFBFHPK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Touch))((::PBYTE)hIl2Cpp + PFKJEBEPPAK_LINJIKAIOFL_OFFSET))(JMFPCFBFHPK);
	}

	static ::UnityEngine::Vector3 AKAGAJECGOD(::UnityEngine::EventSystems::BaseInput* HLFFCMIFFIB)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + PFKJEBEPPAK_AKAGAJECGOD_OFFSET))(HLFFCMIFFIB);
	}

	static ::System::Boolean LINJIKAIOFL_1(::System::Int32 PHOJIGFHMED)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + PFKJEBEPPAK_LINJIKAIOFL_1_OFFSET))(PHOJIGFHMED);
	}

	static ::System::Boolean DJOEPPAJAHA(::System::Int32 PHOJIGFHMED, ::UnityEngine::EventSystems::BaseInput* HLFFCMIFFIB)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + PFKJEBEPPAK_DJOEPPAJAHA_OFFSET))(PHOJIGFHMED, HLFFCMIFFIB);
	}

	static ::System::Boolean MONLFOOAMPF(::System::Int32 PHOJIGFHMED, ::UnityEngine::EventSystems::BaseInput* HLFFCMIFFIB)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + PFKJEBEPPAK_MONLFOOAMPF_OFFSET))(PHOJIGFHMED, HLFFCMIFFIB);
	}
};
