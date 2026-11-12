#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOOHBIKEDMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC254E0)

inline static constexpr unsigned int EOOHBIKEDMH_TypeDefinitionIndex = 44750;

	class EOOHBIKEDMH : public ::System::Object
	{
	public:
		::System::Single ECKNFNIPAKN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOHBIKEDMH_CTOR_OFFSET))(this);
		}

	};
