#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournClassicGameLevelRoom; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEA46B10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEA46B50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET UNITYSDK_OFFSET(0xEA46B60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelLayerData___c_TypeDefinitionIndex = 69576;

	class RogueTournClassicGameLevelLayerData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716B0);
		}

		static ::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncRoomsFull_b__9_0(::RPG::Client::IRogueTournClassicGameLevelRoom* a1, ::RPG::Client::IRogueTournClassicGameLevelRoom* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournClassicGameLevelRoom*, ::RPG::Client::IRogueTournClassicGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
