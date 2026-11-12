#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_EMPTYDISPOSABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9FA0)
#define R3_EMPTYDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5A9FB0)

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
