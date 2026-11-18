#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_COREDATACOLLECTIONSOFTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE5444A0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int CoreDataCollectionSoftReference_TypeDefinitionIndex = 90474;

	class CoreDataCollectionSoftReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_COREDATACOLLECTIONSOFTREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
