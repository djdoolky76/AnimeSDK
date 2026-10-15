#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGCDNMNIKF.h"
class NOFJDPGJCNI;
namespace System { class String; }

#define NOFJDPGJCNI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCEB8E0)
#define NOFJDPGJCNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB880)
#define NOFJDPGJCNI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xBCEB890)

	class NOFJDPGJCNI : public ::GOGCDNMNIKF
	{
	public:
		static ::NOFJDPGJCNI** StaticGet_FMJPMFEDIJL()
		{
			return (::NOFJDPGJCNI**)UnitySDK::FromName("", "NOFJDPGJCNI")->GetStaticField(0x57AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJDPGJCNI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFJDPGJCNI_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJDPGJCNI_JBIOGKPHKKC_OFFSET))(this);
		}

	};
