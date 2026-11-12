#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define OHEJGOBGBHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC71E630)
#define OHEJGOBGBHA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC71E390)

inline static constexpr unsigned int OHEJGOBGBHA_TypeDefinitionIndex = 79447;

	class OHEJGOBGBHA : public ::AKGFIFMIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJGOBGBHA_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJGOBGBHA_KIGBILLGNOH_OFFSET))(this);
		}

	};
