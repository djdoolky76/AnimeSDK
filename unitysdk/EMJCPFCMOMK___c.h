#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMJCPFCMOMK;
namespace System { class Object; }

#define EMJCPFCMOMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E3920)
#define EMJCPFCMOMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E3960)
#define EMJCPFCMOMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2E3970)

	class EMJCPFCMOMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMJCPFCMOMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK___C_CTOR_OFFSET))(this);
		}

		::EMJCPFCMOMK* __cctor_b__23_0()
		{
			return ((::EMJCPFCMOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJCPFCMOMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
