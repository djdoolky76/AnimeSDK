#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaGameLevelLayer; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED48E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED4910)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET UNITYSDK_OFFSET(0x1CED4920)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelInfo___c_TypeDefinitionIndex = 69655;

	class RogueTournPersonaGameLevelInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72EF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLayersFull_b__8_0(::RPG::Client::IRogueTournPersonaGameLevelLayer* a1, ::RPG::Client::IRogueTournPersonaGameLevelLayer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelLayer*, ::RPG::Client::IRogueTournPersonaGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
