#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CINEMACHINE_SAVEDURINGPLAYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x174F1800)

namespace Cinemachine
{
	inline static constexpr unsigned int SaveDuringPlayAttribute_TypeDefinitionIndex = 40756;

	class SaveDuringPlayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SAVEDURINGPLAYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
