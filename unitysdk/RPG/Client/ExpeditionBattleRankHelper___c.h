#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE4E180)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE4E1C0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__FROMSTAR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCE4E1D0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__GETRANKSORDEREDBYSTARDESCENDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xCE4E230)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRankHelper___c_TypeDefinitionIndex = 63848;

	class ExpeditionBattleRankHelper___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56760);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56768);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _FromStar_b__1_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__FROMSTAR_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetRanksOrderedByStarDescending_b__3_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__GETRANKSORDEREDBYSTARDESCENDING_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
