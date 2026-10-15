#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLMJALJBPN;
namespace System { class Object; }

#define CPLMJALJBPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E143FD0)
#define CPLMJALJBPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E144010)
#define CPLMJALJBPN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E144020)

	class CPLMJALJBPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLMJALJBPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN___C_CTOR_OFFSET))(this);
		}

		::CPLMJALJBPN* __cctor_b__18_0()
		{
			return ((::CPLMJALJBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
