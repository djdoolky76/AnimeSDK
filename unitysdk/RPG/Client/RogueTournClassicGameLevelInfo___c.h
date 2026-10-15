#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF8A480)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF8A4C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET UNITYSDK_OFFSET(0xDF8A4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex = 67629;

	class RogueTournClassicGameLevelInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69D20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLayersFull_b__8_0(::RPG::Client::IRogueTournClassicGameLevelLayer* a1, ::RPG::Client::IRogueTournClassicGameLevelLayer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournClassicGameLevelLayer*, ::RPG::Client::IRogueTournClassicGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
