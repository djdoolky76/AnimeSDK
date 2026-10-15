#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPBBKOFJLIM.h"
#include "unitysdk/System/Object.h"

#define MPHJKFMANPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92E3E0)

inline static constexpr unsigned int MPHJKFMANPG_TypeDefinitionIndex = 42273;

	class MPHJKFMANPG : public ::System::Object
	{
	public:
		::FPBBKOFJLIM MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHJKFMANPG_CTOR_OFFSET))(this);
		}

	};
