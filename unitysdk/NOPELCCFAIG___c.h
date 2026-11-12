#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define NOPELCCFAIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5E85C0)
#define NOPELCCFAIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E8600)
#define NOPELCCFAIG___C__SHOWRESTARTDOWNLOADERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC5E8610)
#define NOPELCCFAIG___C__SHOWRETRYDOWNLOADERROR_B__1_0_OFFSET UNITYSDK_OFFSET(0xC5E8640)

inline static constexpr unsigned int NOPELCCFAIG___c_TypeDefinitionIndex = 74801;

	class NOPELCCFAIG___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A010);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A018);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A020);
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
