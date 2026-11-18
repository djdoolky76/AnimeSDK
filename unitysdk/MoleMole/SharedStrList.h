#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_SHAREDSTRLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x181190C0)

namespace MoleMole
{
	inline static constexpr unsigned int SharedStrList_TypeDefinitionIndex = 77294;

	class SharedStrList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDSTRLIST__CTOR_OFFSET))(this);
		}
	};
}
