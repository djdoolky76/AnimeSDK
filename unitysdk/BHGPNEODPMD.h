#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHGPNEODPMD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4756B0)
#define BHGPNEODPMD_DKLLOMMLDJB_OFFSET UNITYSDK_OFFSET(0xB486D40)

inline static constexpr unsigned int BHGPNEODPMD_TypeDefinitionIndex = 59293;

	class BHGPNEODPMD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>** StaticGet_EPFCOLIMEMM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>**)UnitySDK::FromName("", "BHGPNEODPMD")->GetStaticField(0xEB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHGPNEODPMD_CCTOR_OFFSET))();
		}

		static ::System::Boolean DKLLOMMLDJB(::System::RuntimeTypeHandle a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::UInt16))((::PBYTE)hIl2Cpp + BHGPNEODPMD_DKLLOMMLDJB_OFFSET))(a1, a2);
		}

	};
