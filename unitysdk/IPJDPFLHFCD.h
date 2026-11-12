#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IPJDPFLHFCD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB858F50)
#define IPJDPFLHFCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB858F40)

inline static constexpr unsigned int IPJDPFLHFCD_TypeDefinitionIndex = 72204;

	class IPJDPFLHFCD : public ::System::Attribute
	{
	public:
		static ::System::Boolean* StaticGet_DJELFBLJGPM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPJDPFLHFCD")->GetStaticField(0xD7B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJDPFLHFCD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPJDPFLHFCD_CCTOR_OFFSET))();
		}

	};
