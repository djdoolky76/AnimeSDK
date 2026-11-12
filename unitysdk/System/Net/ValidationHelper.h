#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_NET_VALIDATIONHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x2033EBB0)
#define SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET UNITYSDK_OFFSET(0x2033EBA0)
#define SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET UNITYSDK_OFFSET(0x2033EB90)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET UNITYSDK_OFFSET(0x2033C650)

namespace System::Net
{
	inline static constexpr unsigned int ValidationHelper_TypeDefinitionIndex = 2749;

	class ValidationHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Net", "ValidationHelper")->GetStaticField(0x35EE0);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_InvalidParamChars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net", "ValidationHelper")->GetStaticField(0x35EE8);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_InvalidMethodChars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net", "ValidationHelper")->GetStaticField(0x35EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_CCTOR_OFFSET))();
		}

		static ::System::String* MakeStringNull(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET))(a1);
		}

		static ::System::Boolean IsBlankString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET))(a1);
		}

		static ::System::Boolean ValidateTcpPort(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET))(a1);
		}

	};
}
