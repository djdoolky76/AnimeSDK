#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define MELMDJDJHPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17C69FC0)
#define MELMDJDJHPO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x17C69E40)

inline static constexpr unsigned int MELMDJDJHPO_TypeDefinitionIndex = 79443;

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
