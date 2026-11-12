#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define BDAFKFCMNCB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DEA41B0)
#define BDAFKFCMNCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4290)
#define BDAFKFCMNCB_EBBGNFPNGFE_OFFSET UNITYSDK_OFFSET(0x1DEA41C0)
#define BDAFKFCMNCB_EFBEDKJGDII_OFFSET UNITYSDK_OFFSET(0x1DEA4200)

inline static constexpr unsigned int BDAFKFCMNCB_TypeDefinitionIndex = 10654;

	class BDAFKFCMNCB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFKFCMNCB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFKFCMNCB_CLEAR_OFFSET))(this);
		}

		::System::Void EBBGNFPNGFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFKFCMNCB_EBBGNFPNGFE_OFFSET))(this);
		}

		::System::Object* EFBEDKJGDII()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFKFCMNCB_EFBEDKJGDII_OFFSET))(this);
		}

	};
