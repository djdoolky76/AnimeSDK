#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_STRETCHDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x170DD500)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int StretchDataTable_TypeDefinitionIndex = 56292;

	class StretchDataTable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
