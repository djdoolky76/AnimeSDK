#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define MPBOKMEEHGH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA39300)
#define MPBOKMEEHGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA392D0)
#define MPBOKMEEHGH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA38F80)

	class MPBOKMEEHGH : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "MPBOKMEEHGH")->GetStaticField(0x15D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBOKMEEHGH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPBOKMEEHGH_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBOKMEEHGH__ONBIND_OFFSET))(this);
		}

	};
