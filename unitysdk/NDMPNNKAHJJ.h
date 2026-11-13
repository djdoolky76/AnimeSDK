#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDMPNNKAHJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27B930)

inline static constexpr unsigned int NDMPNNKAHJJ_TypeDefinitionIndex = 44770;

	class NDMPNNKAHJJ : public ::System::Object
	{
	public:
		::System::Single FBLAHINNJKA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPNNKAHJJ_CTOR_OFFSET))(this);
		}

	};
