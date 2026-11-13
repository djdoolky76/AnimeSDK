#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class ThreadStart; }

#define RPG_CLIENT_APPUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA994E0)
#define RPG_CLIENT_APPUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA99520)
#define RPG_CLIENT_APPUTILS___C__LAUNCHCHECKSUMTHREAD_B__117_0_OFFSET UNITYSDK_OFFSET(0x1CA99530)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils___c_TypeDefinitionIndex = 60556;

	class AppUtils___c : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadStart** StaticGet___9__117_0()
		{
			return (::System::Threading::ThreadStart**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56EC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Void _launchChecksumThread_b__117_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C__LAUNCHCHECKSUMTHREAD_B__117_0_OFFSET))(this);
		}

	};
}
