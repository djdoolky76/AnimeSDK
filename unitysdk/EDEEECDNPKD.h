#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDEEECDNPKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3A060)

inline static constexpr unsigned int EDEEECDNPKD_TypeDefinitionIndex = 6551;

	class EDEEECDNPKD : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_KFCIEOKJAGF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDEEECDNPKD")->GetStaticField(0x7EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEEECDNPKD_CCTOR_OFFSET))();
		}

	};
