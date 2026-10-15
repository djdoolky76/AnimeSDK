#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKFKJFDBAHA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF87B070)

	class DKFKJFDBAHA : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PIOBBKEOOID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DKFKJFDBAHA")->GetStaticField(0x13BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKFKJFDBAHA_CCTOR_OFFSET))();
		}

	};
