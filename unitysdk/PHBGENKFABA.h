#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"

#define PHBGENKFABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ECED0)

inline static constexpr unsigned int PHBGENKFABA_TypeDefinitionIndex = 37086;

	class PHBGENKFABA : public ::System::Object
	{
	public:
		::System::Int32 NJGKCPOOHDM; // 0x10
		::System::Int32 DDAICPFIOJF; // 0x14
		::KLNKLOMDIIC IILKGCGKLBL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGENKFABA_CTOR_OFFSET))(this);
		}

	};
