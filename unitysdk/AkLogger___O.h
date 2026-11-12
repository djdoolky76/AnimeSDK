#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkLogger_ErrorLoggerInteropDelegate;

inline static constexpr unsigned int AkLogger___O_TypeDefinitionIndex = 45923;

	class AkLogger___O : public ::System::Object
	{
	public:
		static ::AkLogger_ErrorLoggerInteropDelegate** StaticGet__0___WwiseInternalLogError()
		{
			return (::AkLogger_ErrorLoggerInteropDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6DB70);
		}

	};
