#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFHDNANEMN.h"
#include "unitysdk/System/Object.h"

#define AOBFJFEJOKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8704B0)
#define AOBFJFEJOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C870530)

inline static constexpr unsigned int AOBFJFEJOKL_TypeDefinitionIndex = 42002;

	class AOBFJFEJOKL : public ::System::Object
	{
	public:
		::ELFHDNANEMN CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBFJFEJOKL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBFJFEJOKL_CLEAR_OFFSET))(this);
		}

	};
