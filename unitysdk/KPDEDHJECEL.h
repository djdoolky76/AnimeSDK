#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBBEMIEOGAG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPDEDHJECEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5ACF20)
#define KPDEDHJECEL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB5AD140)
#define KPDEDHJECEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xB5AD180)

inline static constexpr unsigned int KPDEDHJECEL_TypeDefinitionIndex = 63356;

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
