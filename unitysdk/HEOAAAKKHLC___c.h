#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/MatchThree1v1AIScoreApsect.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class PKJOPFLMLLB;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPropPriorityConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HEOAAAKKHLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAC7340)
#define HEOAAAKKHLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC7380)
#define HEOAAAKKHLC___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1CAC7390)
#define HEOAAAKKHLC___C___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x1CAC73B0)
#define HEOAAAKKHLC___C___CTOR_B__0_3_OFFSET UNITYSDK_OFFSET(0x1CAC73D0)
#define HEOAAAKKHLC___C___GENPROPSIMULATEINFO_SELECTBREAKSTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1CAC7430)
#define HEOAAAKKHLC___C___MAKECHOICE_B__18_0_OFFSET UNITYSDK_OFFSET(0x1CAC73F0)

	class HEOAAAKKHLC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A990);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*, ::RPG::GameCore::MatchThreePropType>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*, ::RPG::GameCore::MatchThreePropType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A998);
		}

		static ::System::Comparison_1<::PKJOPFLMLLB*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::PKJOPFLMLLB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A9A0);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*, ::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*, ::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A9A8);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A9B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A9B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect __ctor_b__0_1(::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig* a1)
		{
			return ((::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C___CTOR_B__0_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreePropType __ctor_b__0_2(::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig* a1)
		{
			return ((::RPG::GameCore::MatchThreePropType(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C___CTOR_B__0_2_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__0_3(::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C___CTOR_B__0_3_OFFSET))(this, a1);
		}

		::System::Int32 __MakeChoice_b__18_0(::PKJOPFLMLLB* a1, ::PKJOPFLMLLB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PKJOPFLMLLB*, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C___MAKECHOICE_B__18_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GenPropSimulateInfo_SelectBreakStyle_b__31_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C___GENPROPSIMULATEINFO_SELECTBREAKSTYLE_B__31_0_OFFSET))(this, a1, a2);
		}

	};
