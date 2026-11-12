#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDEEECDNPKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF3C7D0)

inline static constexpr unsigned int EDEEECDNPKD_TypeDefinitionIndex = 6558;

	class EDEEECDNPKD : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_KFCIEOKJAGF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDEEECDNPKD")->GetStaticField(0x9A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEEECDNPKD_CCTOR_OFFSET))();
		}

	};
