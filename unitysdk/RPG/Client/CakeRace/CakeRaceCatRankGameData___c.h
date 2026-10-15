#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8E8F30)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8E8F70)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC8E8F80)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatRankGameData___c_TypeDefinitionIndex = 76432;

	class CakeRaceCatRankGameData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x68A00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x68A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__5_0(::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3> a1, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>, ::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA___C__SORT_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
