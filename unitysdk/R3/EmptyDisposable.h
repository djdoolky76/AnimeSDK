#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_EMPTYDISPOSABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x2091B7F0)
#define R3_EMPTYDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2091B800)

namespace R3
{
	inline static constexpr unsigned int EmptyDisposable_TypeDefinitionIndex = 36832;

	class EmptyDisposable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_EMPTYDISPOSABLE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_EMPTYDISPOSABLE_DISPOSE_OFFSET))(this);
		}

	};
}
