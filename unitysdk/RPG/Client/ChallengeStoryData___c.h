#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGESTORYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C056BD0)
#define RPG_CLIENT_CHALLENGESTORYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C056C10)
#define RPG_CLIENT_CHALLENGESTORYDATA___C__GETVORACITYINVASIONLEVEL_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C056C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryData___c_TypeDefinitionIndex = 64586;

	class ChallengeStoryData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71610);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetVoracityInvasionLevel_b__7_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___C__GETVORACITYINVASIONLEVEL_B__7_0_OFFSET))(this, a1);
		}

	};
}
