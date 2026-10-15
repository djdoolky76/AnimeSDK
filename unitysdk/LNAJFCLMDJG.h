#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LNAJFCLMDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C740DC0)

inline static constexpr unsigned int LNAJFCLMDJG_TypeDefinitionIndex = 36450;

	class LNAJFCLMDJG : public ::System::Object
	{
	public:
		::System::Int32 MNDFOPKBHKP; // 0x10
		::System::UInt32 CABBFBKCBCE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAJFCLMDJG_CTOR_OFFSET))(this);
		}

	};
