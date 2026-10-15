#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class PHEHGMEOKMB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HAILIPBNAJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C65A610)
#define HAILIPBNAJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65A650)
#define HAILIPBNAJL___C___CALCDICESCOREBYAILEVEL_B__37_0_OFFSET UNITYSDK_OFFSET(0x1C65A660)
#define HAILIPBNAJL___C___CALCSELECTEDDICESCORE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1C65A6E0)
#define HAILIPBNAJL___C___CALCSELECTEDDICESCORE_B__38_1_OFFSET UNITYSDK_OFFSET(0x1C65A7A0)
#define HAILIPBNAJL___C___GETDICECONTENTWEIGHTLISTMAP_B__41_0_OFFSET UNITYSDK_OFFSET(0x1C65A860)

inline static constexpr unsigned int HAILIPBNAJL___c_TypeDefinitionIndex = 36409;

	class HAILIPBNAJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D0E0);
		}

		static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D0E8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D0F0);
		}

		static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D0F8);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAILIPBNAJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __calcDiceScoreByAILevel_b__37_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C___CALCDICESCOREBYAILEVEL_B__37_0_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__38_0(::System::Single a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C___CALCSELECTEDDICESCORE_B__38_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__38_1(::System::Single a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C___CALCSELECTEDDICESCORE_B__38_1_OFFSET))(this, a1);
		}

		::System::Int64 __GetDiceContentWeightListMap_b__41_0(::System::UInt32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C___GETDICECONTENTWEIGHTLISTMAP_B__41_0_OFFSET))(this, a1);
		}

	};
