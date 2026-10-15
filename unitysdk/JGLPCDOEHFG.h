#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGLPCDOEHFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB19E9A0)

	class JGLPCDOEHFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IHGBDFOKOAC; // 0x10
		::System::Boolean FKLNFMAHKGD; // 0x18
		::System::Boolean PLIEODDEEHG; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 EBNEIJBJGNF; // 0x1C
		::System::UInt32 BIOFDPICHLC; // 0x20
		::System::UInt32 IFGMFCOGNJF; // 0x24
		::System::UInt32 IHHKFADNADN; // 0x28
		::System::UInt32 ADGNNEOEAFO; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLPCDOEHFG_CTOR_OFFSET))(this);
		}

	};
