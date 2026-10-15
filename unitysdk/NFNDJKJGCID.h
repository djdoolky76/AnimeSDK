#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFNDJKJGCID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C956530)

	class NFNDJKJGCID : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BALGFKCIADM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNDJKJGCID_CTOR_OFFSET))(this);
		}

	};
