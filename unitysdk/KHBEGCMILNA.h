#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHBEGCMILNA_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC8FC50)
#define KHBEGCMILNA_GPNNELMLFOE_OFFSET UNITYSDK_OFFSET(0xBC8FB20)

inline static constexpr unsigned int KHBEGCMILNA_TypeDefinitionIndex = 48773;

	class KHBEGCMILNA : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NOIOHCOBNHI()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x3CE30);
		}

		static ::System::String** StaticGet_LBLMCEHCPPF()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x3CE38);
		}

		static ::System::String** StaticGet_KANJNIBPCPD()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x3CE40);
		}

		static ::System::String** StaticGet_KJDONINPOGA()
		{
			return (::System::String**)UnitySDK::FromName("", "KHBEGCMILNA")->GetStaticField(0x3CE48);
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
