#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5B7EF0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B7F20)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xD5B7F30)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0xD5B7F50)

namespace RPG::Client
{
	class MatchThreeV2ChallengerInfos___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54FD0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54FD8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__4_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_0_OFFSET))(this, a1);
		}

		::System::UInt32 __Init_b__4_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS___C___INIT_B__4_1_OFFSET))(this, a1);
		}

	};
}
