#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHBEGCMILNA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3FC580)
#define KHBEGCMILNA_GPNNELMLFOE_OFFSET UNITYSDK_OFFSET(0xB3FC450)

inline static constexpr unsigned int KHBEGCMILNA_TypeDefinitionIndex = 47743;

	class KHBEGCMILNA : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NOIOHCOBNHI()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x53320);
		}

		static ::System::String** StaticGet_LBLMCEHCPPF()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x53328);
		}

		static ::System::String** StaticGet_KJDONINPOGA()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x53330);
		}

		static ::System::String** StaticGet_KANJNIBPCPD()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x53338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHBEGCMILNA_CCTOR_OFFSET))();
		}

		static ::System::Boolean GPNNELMLFOE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + KHBEGCMILNA_GPNNELMLFOE_OFFSET))(a1);
		}

	};
