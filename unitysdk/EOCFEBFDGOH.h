#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IJIMDIILCBF.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOCFEBFDGOH_BCFNEBFANKG_OFFSET UNITYSDK_OFFSET(0x155BBB20)
#define EOCFEBFDGOH_CTOR_OFFSET UNITYSDK_OFFSET(0x155BBD60)
#define EOCFEBFDGOH_DADEDMGBBLM_OFFSET UNITYSDK_OFFSET(0x155BBC80)
#define EOCFEBFDGOH_FKGHHHBLCMK_OFFSET UNITYSDK_OFFSET(0x155BBC30)

	class EOCFEBFDGOH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OIPMNNAHIFP>* OEJKFPFJPOH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCFEBFDGOH_CTOR_OFFSET))(this);
		}

		::System::Boolean BCFNEBFANKG(::System::UInt32 a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + EOCFEBFDGOH_BCFNEBFANKG_OFFSET))(this, a1, a2);
		}

		::System::Boolean FKGHHHBLCMK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOCFEBFDGOH_FKGHHHBLCMK_OFFSET))(this, a1);
		}

		::System::Boolean DADEDMGBBLM(::System::UInt32 a1, ::IJIMDIILCBF a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + EOCFEBFDGOH_DADEDMGBBLM_OFFSET))(this, a1, a2);
		}

	};
