#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMILMCIDIO;

#define MKACPGGHPDO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92C8F0)
#define MKACPGGHPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C970)

	class MKACPGGHPDO : public ::System::Object
	{
	public:
		::KCMILMCIDIO* CNLHCKELLBE; // 0x10
		::System::Single DONFONGOMIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKACPGGHPDO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKACPGGHPDO_CLEAR_OFFSET))(this);
		}

	};
