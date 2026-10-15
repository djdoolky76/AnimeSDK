#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkLogger_ErrorLoggerInteropDelegate;

	class AkLogger___O : public ::System::Object
	{
	public:
		static ::AkLogger_ErrorLoggerInteropDelegate** StaticGet__0___WwiseInternalLogError()
		{
			return (::AkLogger_ErrorLoggerInteropDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0xC0B0);
		}

	};
