#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_AMIBENTOCCLUSIOMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEDB70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AmibentOcclusioMethodParameter_TypeDefinitionIndex = 37784;

	class AmibentOcclusioMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AMIBENTOCCLUSIOMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
