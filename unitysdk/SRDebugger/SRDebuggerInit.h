#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

#define SRDEBUGGER_SRDEBUGGERINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42B0B0)

namespace SRDebugger
{
	inline static constexpr unsigned int SRDebuggerInit_TypeDefinitionIndex = 38885;

	class SRDebuggerInit : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SRDEBUGGERINIT_CTOR_OFFSET))(this);
		}

	};
}
