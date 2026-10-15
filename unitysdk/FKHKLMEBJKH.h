#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKHKLMEBJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x157FABB0)

inline static constexpr unsigned int FKHKLMEBJKH_TypeDefinitionIndex = 82120;

	class FKHKLMEBJKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EKGMCMHHNMD; // 0x10
		::System::UInt32 DLOOMDHHNGC; // 0x18
		::System::UInt32 GBJLLAJJEOL; // 0x1C
		::System::Int32 KPAHFGEFKEB; // 0x20
		::System::UInt32 ACCJKGEKHKP; // 0x24
		::System::UInt32 AAGKEBFHLMC; // 0x28
		::System::UInt32 PBNOGPCPFJM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHKLMEBJKH_CTOR_OFFSET))(this);
		}

	};
