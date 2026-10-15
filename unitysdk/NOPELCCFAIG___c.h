#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define NOPELCCFAIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCF9750)
#define NOPELCCFAIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF9790)
#define NOPELCCFAIG___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBCF97A0)
#define NOPELCCFAIG___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCF97D0)

inline static constexpr unsigned int NOPELCCFAIG___c_TypeDefinitionIndex = 72722;

	class NOPELCCFAIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58600);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58608);
		}

		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPELCCFAIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowRestartDownloadError_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET))(this);
		}

		::System::Void _ShowRetryDownloadError_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPELCCFAIG___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET))(this);
		}

	};
