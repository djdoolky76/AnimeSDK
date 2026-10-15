#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF85880)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF858C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__ISALLSLOTHASRECOM_B__5_0_OFFSET UNITYSDK_OFFSET(0xDF858D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamDataExt___c_TypeDefinitionIndex = 67537;

	class RogueTournBuildRefTeamDataExt___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69C30);
		}

		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllSlotHasRecom_b__5_0(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__ISALLSLOTHASRECOM_B__5_0_OFFSET))(this, a1);
		}

	};
}
