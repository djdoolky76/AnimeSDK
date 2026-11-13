#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKLLGBHAKML_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A1660)

inline static constexpr unsigned int PKLLGBHAKML_TypeDefinitionIndex = 37786;

	class PKLLGBHAKML : public ::System::Object
	{
	public:
		::System::UInt32 AFAGNPPAHLF; // 0x10
		::System::Single KKIAAJJBGNN; // 0x14
		::System::UInt32 FJFEGGLDGPG; // 0x18
		::System::Single EAGAEAIBAPD; // 0x1C
		::System::UInt32 GHCGHMLEHPC; // 0x20
		::System::UInt32 CPAOACANOHE; // 0x24
		// static const ::System::Object NOLDOHPNAPN; // 0x0
		// static const ::System::Object GNJLEAFKBHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLLGBHAKML_CTOR_OFFSET))(this);
		}

	};
