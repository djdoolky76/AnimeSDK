#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define MFCAMPFHMCP_HPEFBJDJAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int MFCAMPFHMCP_HPEFBJDJAIN_TypeDefinitionIndex = 57742;

struct alignas(8) MFCAMPFHMCP_HPEFBJDJAIN
{
	::System::String* FILAEDKNJNM; // 0x10
	::System::Action* ENMPHIDPIOC; // 0x18

	::System::Void _ctor(::System::String* FILAEDKNJNM, ::System::Action* ENMPHIDPIOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MFCAMPFHMCP_HPEFBJDJAIN__CTOR_OFFSET))(this, FILAEDKNJNM, ENMPHIDPIOC);
	}
};
