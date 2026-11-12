#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEDGPBKGCBP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3E2410)
#define NEDGPBKGCBP_IAAOCKOEJEN_OFFSET UNITYSDK_OFFSET(0xC3E24B0)
#define NEDGPBKGCBP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC3E2430)

inline static constexpr unsigned int NEDGPBKGCBP_TypeDefinitionIndex = 75452;

	class NEDGPBKGCBP : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DDPPHNJFMIN()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NEDGPBKGCBP")->GetStaticField(0x7DF0);
		}

		static ::System::UInt32* StaticGet_KMNAOJBJBNC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NEDGPBKGCBP")->GetStaticField(0x7DF4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_CCTOR_OFFSET))();
		}

		static ::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_KHGIKBFDLFB_OFFSET))();
		}

		static ::System::UInt32 IAAOCKOEJEN()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_IAAOCKOEJEN_OFFSET))();
		}

	};
