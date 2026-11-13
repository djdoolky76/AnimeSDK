#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLEKHNKKPGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ACC4F0)
#define BLEKHNKKPGM_FIEOEFKGIJE_OFFSET UNITYSDK_OFFSET(0x15ACC180)
#define BLEKHNKKPGM_KJOFHPFEFIO_OFFSET UNITYSDK_OFFSET(0x15ACC120)
#define BLEKHNKKPGM_OLJONBLIMLE_OFFSET UNITYSDK_OFFSET(0x15ACBF80)
#define BLEKHNKKPGM_OMBLDFAGIEJ_OFFSET UNITYSDK_OFFSET(0x15ACC330)

inline static constexpr unsigned int BLEKHNKKPGM_TypeDefinitionIndex = 42365;

	class BLEKHNKKPGM : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EOANOCIBEAM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x1880);
		}

		static ::System::Boolean* StaticGet_KOOHOOAPILD()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x1881);
		}

		static ::System::Boolean* StaticGet_BOJFKDPCKGI()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x1882);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEKHNKKPGM_CCTOR_OFFSET))();
		}

		static ::System::Boolean OLJONBLIMLE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLEKHNKKPGM_OLJONBLIMLE_OFFSET))();
		}

		static ::System::Boolean KJOFHPFEFIO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLEKHNKKPGM_KJOFHPFEFIO_OFFSET))();
		}

		static ::System::Void FIEOEFKGIJE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BLEKHNKKPGM_FIEOEFKGIJE_OFFSET))(a1);
		}

		static ::System::Boolean OMBLDFAGIEJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BLEKHNKKPGM_OMBLDFAGIEJ_OFFSET))(a1);
		}

	};
