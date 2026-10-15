#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LEKBDJCLKFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C47EE60)
#define LEKBDJCLKFD_DIANDDDPEGO_OFFSET UNITYSDK_OFFSET(0x1C47EE20)
#define LEKBDJCLKFD_IKDKNJFLBJP_OFFSET UNITYSDK_OFFSET(0x1C47ED50)
#define LEKBDJCLKFD_LDDELEKINOG_OFFSET UNITYSDK_OFFSET(0x1C47ED80)
#define LEKBDJCLKFD_LEDCFMLFPNH_OFFSET UNITYSDK_OFFSET(0x1C47ECC0)

inline static constexpr unsigned int LEKBDJCLKFD_TypeDefinitionIndex = 41381;

	class LEKBDJCLKFD : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_HHDEOAPGBIM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LEKBDJCLKFD")->GetStaticField(0x5610);
		}

		static ::System::Single* StaticGet_HKJKMIIGJLM()
		{
			return (::System::Single*)UnitySDK::FromName("", "LEKBDJCLKFD")->GetStaticField(0x5614);
		}

		// static const ::System::Object KJAIACONLEM; // 0x0
		// static const ::System::Object NIBOCABDMIN; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKBDJCLKFD_CCTOR_OFFSET))();
		}

		static ::System::Int32 LEDCFMLFPNH()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LEKBDJCLKFD_LEDCFMLFPNH_OFFSET))();
		}

		static ::System::Void IKDKNJFLBJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LEKBDJCLKFD_IKDKNJFLBJP_OFFSET))(a1);
		}

		static ::System::Single LDDELEKINOG()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + LEKBDJCLKFD_LDDELEKINOG_OFFSET))();
		}

		static ::System::Void DIANDDDPEGO(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + LEKBDJCLKFD_DIANDDDPEGO_OFFSET))(a1);
		}

	};
