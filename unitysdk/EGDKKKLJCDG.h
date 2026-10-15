#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGDKKKLJCDG_CTOR_OFFSET UNITYSDK_OFFSET(0x13A64DC0)

inline static constexpr unsigned int EGDKKKLJCDG_TypeDefinitionIndex = 76056;

	class EGDKKKLJCDG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDKKKLJCDG_CTOR_OFFSET))(this);
		}

	};
