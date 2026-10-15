#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENNICBAOCNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61B80)

inline static constexpr unsigned int ENNICBAOCNM_TypeDefinitionIndex = 42445;

	class ENNICBAOCNM : public ::System::Object
	{
	public:
		::System::UInt32 BFLIFKBEOPJ; // 0x10
		::System::UInt32 PDKOHKKMKLF; // 0x14
		::System::Boolean BDOABKMIHEC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 OOPKIKDJLOK; // 0x1C
		::System::UInt32 JMPMDGJLIPF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNICBAOCNM_CTOR_OFFSET))(this);
		}

	};
