#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBPKLKBFKIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9155C0)

inline static constexpr unsigned int NBPKLKBFKIG_TypeDefinitionIndex = 42347;

	class NBPKLKBFKIG : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKLKBFKIG_CTOR_OFFSET))(this);
		}

	};
