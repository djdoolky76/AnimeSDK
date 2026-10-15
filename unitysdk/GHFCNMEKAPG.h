#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define GHFCNMEKAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A18BA0)
#define GHFCNMEKAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A18B70)
#define GHFCNMEKAPG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A18850)

	class GHFCNMEKAPG : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "GHFCNMEKAPG")->GetStaticField(0x2D530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFCNMEKAPG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFCNMEKAPG_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFCNMEKAPG__ONBIND_OFFSET))(this);
		}

	};
