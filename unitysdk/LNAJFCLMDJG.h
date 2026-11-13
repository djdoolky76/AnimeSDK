#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LNAJFCLMDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22390)

inline static constexpr unsigned int LNAJFCLMDJG_TypeDefinitionIndex = 37378;

	class LNAJFCLMDJG : public ::System::Object
	{
	public:
		::System::UInt32 CABBFBKCBCE; // 0x10
		::System::Int32 MNDFOPKBHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAJFCLMDJG_CTOR_OFFSET))(this);
		}

	};
