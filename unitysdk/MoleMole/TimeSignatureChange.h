#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMESIGNATURECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1249F2E0)

namespace MoleMole
{
	inline static constexpr unsigned int TimeSignatureChange_TypeDefinitionIndex = 70729;

	class TimeSignatureChange : public ::System::Object
	{
	public:
		::System::Double AtBeat; // 0x10
		::System::Int32 Numerator; // 0x18
		::System::Int32 Denominator; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMESIGNATURECHANGE__CTOR_OFFSET))(this);
		}
	};
}
