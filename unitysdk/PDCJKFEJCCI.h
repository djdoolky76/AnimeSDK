#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMDMCCENAPE;

#define PDCJKFEJCCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC94240)

	class PDCJKFEJCCI : public ::System::Object
	{
	public:
		static ::KMDMCCENAPE** StaticGet_CEFJFLMFIPA()
		{
			return (::KMDMCCENAPE**)UnitySDK::FromName("", "PDCJKFEJCCI")->GetStaticField(0xFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDCJKFEJCCI_CCTOR_OFFSET))();
		}

	};
