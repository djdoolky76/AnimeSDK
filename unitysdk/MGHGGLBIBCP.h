#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMEIPMCICA;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGHGGLBIBCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC936E0)
#define MGHGGLBIBCP_LBJEEAEJBCM_1_OFFSET UNITYSDK_OFFSET(0x1CC90640)

	class MGHGGLBIBCP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::JEMEIPMCICA*>** StaticGet_JGJFFFJCBEF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::JEMEIPMCICA*>**)UnitySDK::FromName("", "MGHGGLBIBCP")->GetStaticField(0xF90);
		}

		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::JEMEIPMCICA*>** StaticGet_HNENBOGHDLL()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::JEMEIPMCICA*>**)UnitySDK::FromName("", "MGHGGLBIBCP")->GetStaticField(0xF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHGGLBIBCP_CCTOR_OFFSET))();
		}

		static ::JEMEIPMCICA* LBJEEAEJBCM_1(::System::Type* a1)
		{
			return ((::JEMEIPMCICA*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MGHGGLBIBCP_LBJEEAEJBCM_1_OFFSET))(a1);
		}

	};
