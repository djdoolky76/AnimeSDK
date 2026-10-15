#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIKNBDOINHP_CMGPHOEAENM_OFFSET UNITYSDK_OFFSET(0xC26DF00)
#define PIKNBDOINHP_NMHLPOHFPKJ_OFFSET UNITYSDK_OFFSET(0xC26DE50)

	class PIKNBDOINHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_IJMEGHPOCAK()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("", "PIKNBDOINHP")->GetStaticField(0x6F820);
		}

		static ::System::UInt32 NMHLPOHFPKJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PIKNBDOINHP_NMHLPOHFPKJ_OFFSET))(a1);
		}

		static ::System::Void CMGPHOEAENM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKNBDOINHP_CMGPHOEAENM_OFFSET))();
		}

	};
