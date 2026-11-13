#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGDKKKLJCDG_CTOR_OFFSET UNITYSDK_OFFSET(0x17BFF390)

inline static constexpr unsigned int EGDKKKLJCDG_TypeDefinitionIndex = 78383;

	class EGDKKKLJCDG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDKKKLJCDG_CTOR_OFFSET))(this);
		}

	};
