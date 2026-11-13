#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT_CTOR_OFFSET UNITYSDK_OFFSET(0x1824EF00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SDFSystemBehaviour_UInt64StringDict_TypeDefinitionIndex = 52955;

	class SDFSystemBehaviour_UInt64StringDict
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT_CTOR_OFFSET))(this);
		}

	};
}
