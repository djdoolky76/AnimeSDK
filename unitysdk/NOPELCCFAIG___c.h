#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define NOPELCCFAIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCF2670)
#define NOPELCCFAIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF26B0)
#define NOPELCCFAIG___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBCF26C0)
#define NOPELCCFAIG___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCF26F0)

inline static constexpr unsigned int NOPELCCFAIG___c_TypeDefinitionIndex = 72721;

	class NOPELCCFAIG___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537B8);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537C0);
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
