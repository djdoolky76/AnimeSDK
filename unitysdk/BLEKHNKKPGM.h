#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLEKHNKKPGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4099C0)
#define BLEKHNKKPGM_FIEOEFKGIJE_OFFSET UNITYSDK_OFFSET(0x1C409650)
#define BLEKHNKKPGM_KJOFHPFEFIO_OFFSET UNITYSDK_OFFSET(0x1C4095F0)
#define BLEKHNKKPGM_OLJONBLIMLE_OFFSET UNITYSDK_OFFSET(0x1C409450)
#define BLEKHNKKPGM_OMBLDFAGIEJ_OFFSET UNITYSDK_OFFSET(0x1C409800)

inline static constexpr unsigned int BLEKHNKKPGM_TypeDefinitionIndex = 41390;

	class BLEKHNKKPGM : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_KOOHOOAPILD()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x3FA0);
		}

		static ::System::Boolean* StaticGet_BOJFKDPCKGI()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x3FA1);
		}

		static ::System::Boolean* StaticGet_EOANOCIBEAM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLEKHNKKPGM")->GetStaticField(0x3FA2);
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
