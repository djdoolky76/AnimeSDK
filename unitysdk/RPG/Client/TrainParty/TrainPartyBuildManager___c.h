#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C62F470)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62F4B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__GETSHOWINACTIVITYAREAINFOLIST_B__45_0_OFFSET UNITYSDK_OFFSET(0x1C62F4C0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c_TypeDefinitionIndex = 76447;

	class TrainPartyBuildManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x2D160);
		}

		static ::System::Func_2<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x2D168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowInActivityAreaInfoList_b__45_0(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__GETSHOWINACTIVITYAREAINFOLIST_B__45_0_OFFSET))(this, a1);
		}

	};
}
