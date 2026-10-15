#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGJHEBNJD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FRIENDMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD059440)
#define RPG_CLIENT_FRIENDMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD059480)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__121_0_OFFSET UNITYSDK_OFFSET(0xD0594B0)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__120_0_OFFSET UNITYSDK_OFFSET(0xD059490)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule___c_TypeDefinitionIndex = 64252;

	class FriendModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NNAGJHEBNJD*, ::System::String*>** StaticGet___9__120_0()
		{
			return (::System::Func_2<::NNAGJHEBNJD*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62D10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62D18);
		}

		static ::System::Func_2<::NNAGJHEBNJD*, ::System::String*>** StaticGet___9__121_0()
		{
			return (::System::Func_2<::NNAGJHEBNJD*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetPSUUIDFriendList_b__120_0(::NNAGJHEBNJD* a1)
		{
			return ((::System::String*(*)(::PVOID, ::NNAGJHEBNJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__120_0_OFFSET))(this, a1);
		}

		::System::String* _GetPSUUIDBlackList_b__121_0(::NNAGJHEBNJD* a1)
		{
			return ((::System::String*(*)(::PVOID, ::NNAGJHEBNJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__121_0_OFFSET))(this, a1);
		}

	};
}
