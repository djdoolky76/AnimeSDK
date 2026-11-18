#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC_HIBHDHFCOCA_OFFSET UNITYSDK_OFFSET(0x142C4FE0)
#define GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x142C4FD0)

inline static constexpr unsigned int GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC_TypeDefinitionIndex = 59382;

class GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC : public ::System::Object
{
public:
	::System::Action* BFOMBFMONJG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC__CTOR_OFFSET))(this);
	}

	::System::Void HIBHDHFCOCA(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN_BBJDHGDEAMC_HIBHDHFCOCA_OFFSET))(this, EIHKHEKBGLC);
	}
};
