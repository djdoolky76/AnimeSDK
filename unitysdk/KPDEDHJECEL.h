#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBBEMIEOGAG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPDEDHJECEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B3830)
#define KPDEDHJECEL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB5B3A50)
#define KPDEDHJECEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xB5B3A90)

	class KPDEDHJECEL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BBBEMIEOGAG*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDEDHJECEL_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDEDHJECEL_HADOHLNHHGB_OFFSET))(this);
		}

		::BBBEMIEOGAG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BBBEMIEOGAG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPDEDHJECEL_LMBKNCAIDLC_OFFSET))(this, a1);
		}

	};
