#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Container/Cell.h"

#define FOUNDATION_CONTAINER_CELLFUNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1D40)
#define FOUNDATION_CONTAINER_CELLFUNC_GET_ALLOWDUPLICATEKEYS_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define FOUNDATION_CONTAINER_CELLFUNC_HASH_OFFSET UNITYSDK_OFFSET(0x9B1D70)

namespace Foundation::Container
{
	inline static constexpr unsigned int CellFunc_TypeDefinitionIndex = 8885;

	struct alignas(4) CellFunc
	{
		::System::Boolean Equals(::Foundation::Container::Cell left, ::Foundation::Container::Cell right)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Container::Cell, ::Foundation::Container::Cell))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLFUNC_EQUALS_OFFSET))(this, left, right);
		}

		::System::Int32 Hash(::Foundation::Container::Cell cell)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Container::Cell))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLFUNC_HASH_OFFSET))(this, cell);
		}

		::System::Boolean get_AllowDuplicateKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLFUNC_GET_ALLOWDUPLICATEKEYS_OFFSET))(this);
		}
	};
}
