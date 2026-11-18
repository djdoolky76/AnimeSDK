#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MPKBDIJDMAP_IAMAKGEAMMG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7D3D80)

inline static constexpr unsigned int MPKBDIJDMAP_IAMAKGEAMMG_TypeDefinitionIndex = 65443;

struct alignas(8) MPKBDIJDMAP_IAMAKGEAMMG
{
	::System::Single CCDNKBONPLB; // 0x10
	::Foundation::Coroutine::CoroutineHandle IOKODKLJNGP; // 0x14
	::System::Action* FOIKEJAENII; // 0x18

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_IAMAKGEAMMG_NPOLNFDBOOD_OFFSET))(this);
	}
};
