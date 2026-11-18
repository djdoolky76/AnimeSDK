#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_CLOSEUPDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x120A76B0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int CloseUpDataTable_TypeDefinitionIndex = 74718;

	class CloseUpDataTable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
