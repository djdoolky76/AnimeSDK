#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_EARLYACCESSMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD0E240)
#define RPG_CLIENT_EARLYACCESSMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD0E270)
#define RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__17_0_OFFSET UNITYSDK_OFFSET(0xCD0E2A0)
#define RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xCD0E280)

namespace RPG::Client
{
	class EarlyAccessModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::EarlyAccessContent*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x349C0);
		}

		static ::System::Predicate_1<::RPG::Client::EarlyAccessContent*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::RPG::Client::EarlyAccessContent*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x349C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x349D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendEarlyAccessData_b__9_0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__SENDEARLYACCESSDATA_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetDoingContent_b__17_0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__GETDOINGCONTENT_B__17_0_OFFSET))(this, a1);
		}

	};
}
