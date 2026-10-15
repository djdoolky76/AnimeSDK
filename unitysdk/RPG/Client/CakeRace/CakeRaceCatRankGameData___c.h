#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8F0690)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8F06D0)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC8F06E0)

namespace RPG::Client::CakeRace
{
	class CakeRaceCatRankGameData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x60C60);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x60C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__5_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
