#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNGKJFAMKLI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMGKOCCHEFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB25E5D0)
#define JMGKOCCHEFG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB25E9E0)
#define JMGKOCCHEFG_IFKJNDBNBLM_OFFSET UNITYSDK_OFFSET(0xB25EB20)
#define JMGKOCCHEFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xB25EA70)

inline static constexpr unsigned int JMGKOCCHEFG_TypeDefinitionIndex = 63359;

	class JMGKOCCHEFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FNGKJFAMKLI*>* DPHNABJHCFI; // 0x10
		::FNGKJFAMKLI* DPFOPINNHLI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGKOCCHEFG_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGKOCCHEFG_HADOHLNHHGB_OFFSET))(this);
		}

		::FNGKJFAMKLI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FNGKJFAMKLI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMGKOCCHEFG_LMBKNCAIDLC_OFFSET))(this, a1);
		}

		::FNGKJFAMKLI* IFKJNDBNBLM()
		{
			return ((::FNGKJFAMKLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGKOCCHEFG_IFKJNDBNBLM_OFFSET))(this);
		}

	};
