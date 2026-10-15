#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKFKJFDBAHA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF875760)

inline static constexpr unsigned int DKFKJFDBAHA_TypeDefinitionIndex = 49253;

	class DKFKJFDBAHA : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PIOBBKEOOID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DKFKJFDBAHA")->GetStaticField(0x130D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKFKJFDBAHA_CCTOR_OFFSET))();
		}

	};
