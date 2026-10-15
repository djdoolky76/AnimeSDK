#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFCAILJAEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A480A0)

inline static constexpr unsigned int EFCAILJAEKA_TypeDefinitionIndex = 81280;

	class EFCAILJAEKA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCAILJAEKA_CTOR_OFFSET))(this);
		}

	};
