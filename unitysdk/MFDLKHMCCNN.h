#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MFDLKHMCCNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EB460)

inline static constexpr unsigned int MFDLKHMCCNN_TypeDefinitionIndex = 63736;

	class MFDLKHMCCNN : public ::System::Object
	{
	public:
		::System::UInt32 CKIGFJAKFOI; // 0x10
		::System::UInt32 NMBKAIEIAPE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDLKHMCCNN_CTOR_OFFSET))(this);
		}

	};
