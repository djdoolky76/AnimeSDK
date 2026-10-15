#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFED2B0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFED2E0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__ROOMCOUNT_B__1_0_OFFSET UNITYSDK_OFFSET(0xDFED2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelExt___c_TypeDefinitionIndex = 67644;

	class RogueTournGameLevelExt___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournGameLevelLayer*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournGameLevelLayer*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CEC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _RoomCount_b__1_0(::RPG::Client::IRogueTournGameLevelLayer* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__ROOMCOUNT_B__1_0_OFFSET))(this, a1);
		}

	};
}
