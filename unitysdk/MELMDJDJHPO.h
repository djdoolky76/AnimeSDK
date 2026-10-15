#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define MELMDJDJHPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9EC0)
#define MELMDJDJHPO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB8D9D70)

inline static constexpr unsigned int MELMDJDJHPO_TypeDefinitionIndex = 77109;

	class MELMDJDJHPO : public ::AKGFIFMIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELMDJDJHPO_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELMDJDJHPO_KIGBILLGNOH_OFFSET))(this);
		}

	};
