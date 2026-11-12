#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKEOHKIGEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0C840)

inline static constexpr unsigned int AKEOHKIGEHL_TypeDefinitionIndex = 44868;

	class AKEOHKIGEHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEOHKIGEHL_CTOR_OFFSET))(this);
		}

	};
