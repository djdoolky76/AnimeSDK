#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1D8C7CB0)

inline static constexpr unsigned int LittleGameShareMessagePackInitializer_TypeDefinitionIndex = 37020;

	class LittleGameShareMessagePackInitializer : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AIIPPMJMBAC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LittleGameShareMessagePackInitializer")->GetStaticField(0x1A00);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET))();
		}

	};
