#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNLPEPPOIHE_DCPKKEKNOOM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5886B0)
#define KNLPEPPOIHE_DCPKKEKNOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB588120)

	class KNLPEPPOIHE_DCPKKEKNOOM : public ::System::Object
	{
	public:
		::System::Int32 GNPIMBBICED; // 0x10
		::System::UInt32 EJKPGBEHNLK; // 0x14
		::System::UInt32 OFMNAIFOHKF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DCPKKEKNOOM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DCPKKEKNOOM_CLEAR_OFFSET))(this);
		}

	};
