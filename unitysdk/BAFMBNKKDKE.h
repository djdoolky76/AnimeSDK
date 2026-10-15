#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/System/Object.h"

#define BAFMBNKKDKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BDA480)
#define BAFMBNKKDKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDA470)

	class BAFMBNKKDKE : public ::System::Object
	{
	public:
		static ::PFACHJFCILN_PreloadType* StaticGet_GPBPJMHOGEF()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "BAFMBNKKDKE")->GetStaticField(0x13910);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_NMNOGJOHJEK()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "BAFMBNKKDKE")->GetStaticField(0x13914);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFMBNKKDKE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAFMBNKKDKE_CCTOR_OFFSET))();
		}

	};
