#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define CNNEBCHHBHD_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F51F0)

inline static constexpr unsigned int CNNEBCHHBHD_TypeDefinitionIndex = 57436;

	class CNNEBCHHBHD : public ::System::Object
	{
	public:
		::System::Action* MHEGPBOBCNB; // 0x10
		::System::Action* HMLKKGLNFCJ; // 0x18
		::System::Single HEMMCOGMEFA; // 0x20
		::System::Single BJMAMHMCOEL; // 0x24
		::System::Boolean CIHFGJDCHIA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNEBCHHBHD_CTOR_OFFSET))(this);
		}

	};
