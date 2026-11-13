#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EODAMCCAMCI_CTOR_OFFSET UNITYSDK_OFFSET(0x16B1DAF0)

inline static constexpr unsigned int EODAMCCAMCI_TypeDefinitionIndex = 57672;

	class EODAMCCAMCI : public ::System::Object
	{
	public:
		::System::Boolean LMPBDDIHFEA; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 NJGKCPOOHDM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODAMCCAMCI_CTOR_OFFSET))(this);
		}

	};
