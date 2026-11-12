#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting::Lifetime { class LeaseManager; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4671E0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1D467280)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x1D467360)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1D467420)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D4674E0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1D4672E0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x1D4673C0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1D467480)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D467540)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D4675A0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LifetimeServices_TypeDefinitionIndex = 1245;

	class LifetimeServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Lifetime::LeaseManager** StaticGet__leaseManager()
		{
			return (::System::Runtime::Remoting::Lifetime::LeaseManager**)UnitySDK::FromName("System.Runtime.Remoting.Lifetime", "LifetimeServices")->GetStaticField(0x1A730);
		}

		static ::System::TimeSpan* StaticGet__sponsorshipTimeout()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("System.Runtime.Remoting.Lifetime", "LifetimeServices")->GetStaticField(0x5630);
		}

		static ::System::TimeSpan* StaticGet__renewOnCallTime()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("System.Runtime.Remoting.Lifetime", "LifetimeServices")->GetStaticField(0x5638);
		}

		static ::System::TimeSpan* StaticGet__leaseTime()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("System.Runtime.Remoting.Lifetime", "LifetimeServices")->GetStaticField(0x5640);
		}

		static ::System::TimeSpan* StaticGet__leaseManagerPollTime()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("System.Runtime.Remoting.Lifetime", "LifetimeServices")->GetStaticField(0x5648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_CCTOR_OFFSET))();
		}

		static ::System::TimeSpan get_LeaseManagerPollTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET))();
		}

		static ::System::Void set_LeaseManagerPollTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_LeaseTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET))();
		}

		static ::System::Void set_LeaseTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET))();
		}

		static ::System::Void set_RenewOnCallTime(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET))(a1);
		}

		static ::System::TimeSpan get_SponsorshipTimeout()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET))();
		}

		static ::System::Void set_SponsorshipTimeout(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET))(a1);
		}

		static ::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET))(a1);
		}

	};
}
