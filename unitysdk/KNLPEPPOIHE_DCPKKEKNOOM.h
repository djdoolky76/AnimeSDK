#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNLPEPPOIHE_DCPKKEKNOOM_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDDAD60)
#define KNLPEPPOIHE_DCPKKEKNOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA7D0)

inline static constexpr unsigned int KNLPEPPOIHE_DCPKKEKNOOM_TypeDefinitionIndex = 57245;

	class KNLPEPPOIHE_DCPKKEKNOOM : public ::System::Object
	{
	public:
		::System::UInt32 OFMNAIFOHKF; // 0x10
		::System::UInt32 EJKPGBEHNLK; // 0x14
		::System::Int32 GNPIMBBICED; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DCPKKEKNOOM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DCPKKEKNOOM_CLEAR_OFFSET))(this);
		}

	};
