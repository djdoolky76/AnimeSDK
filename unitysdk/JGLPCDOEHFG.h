#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGLPCDOEHFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB198630)

inline static constexpr unsigned int JGLPCDOEHFG_TypeDefinitionIndex = 63733;

	class JGLPCDOEHFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IHGBDFOKOAC; // 0x10
		::System::UInt32 IFGMFCOGNJF; // 0x18
		::System::UInt32 EBNEIJBJGNF; // 0x1C
		::System::UInt32 ADGNNEOEAFO; // 0x20
		::System::UInt32 IHHKFADNADN; // 0x24
		::System::UInt32 BIOFDPICHLC; // 0x28
		::System::Boolean PLIEODDEEHG; // 0x2C
		::System::Boolean FKLNFMAHKGD; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLPCDOEHFG_CTOR_OFFSET))(this);
		}

	};
