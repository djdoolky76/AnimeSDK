#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRF::Service { class SRServiceManager_ServiceStub; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SRF_SERVICE_SRSERVICEMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED79B50)
#define SRF_SERVICE_SRSERVICEMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED79B90)
#define SRF_SERVICE_SRSERVICEMANAGER___C__UPDATESTUBS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1ED79BA0)

namespace SRF::Service
{
	class SRServiceManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("SRF.Service", "<>c")->GetStaticField(0x48750);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SRF.Service", "<>c")->GetStaticField(0x48758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::String* _UpdateStubs_b__21_0(::SRF::Service::SRServiceManager_ServiceStub* a1)
		{
			return ((::System::String*(*)(::PVOID, ::SRF::Service::SRServiceManager_ServiceStub*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__UPDATESTUBS_B__21_0_OFFSET))(this, a1);
		}

	};
}
