#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMDCEHLIBBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15524D10)

inline static constexpr unsigned int EMDCEHLIBBB_TypeDefinitionIndex = 60921;

	class EMDCEHLIBBB : public ::System::Object
	{
	public:
		::System::Int32 HIBKMEDOBKG; // 0x10
		::System::Single KBONICBINHB; // 0x14
		::System::Int32 IDFIOEBNPJF; // 0x18
		::System::Int32 MNDJCEFFCIC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDCEHLIBBB_CTOR_OFFSET))(this);
		}

	};
