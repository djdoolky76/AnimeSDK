#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HJDNCNIPOKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D13E90)
#define HJDNCNIPOKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D13ED0)
#define HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET UNITYSDK_OFFSET(0x15D13F20)
#define HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET UNITYSDK_OFFSET(0x15D13F40)
#define HJDNCNIPOKM___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET UNITYSDK_OFFSET(0x15D13F60)
#define HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET UNITYSDK_OFFSET(0x15D13EE0)
#define HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET UNITYSDK_OFFSET(0x15D13F00)

	class HJDNCNIPOKM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB00);
		}

		static ::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>** StaticGet___9__50_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB08);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB10);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB18);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB20);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ComputeStyleWeights_b__48_0(::RPG::GameCore::Match3::BirdStyleWeightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ComputeStyleWeights_b__48_1(::RPG::GameCore::Match3::BirdStyleWeightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ComputeItemPackWeights_b__49_0(::RPG::GameCore::Match3::BirdItemPackWeightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ComputeItemPackWeights_b__49_1(::RPG::GameCore::Match3::BirdItemPackWeightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET))(this, a1);
		}

		::System::Int32 __ComputePieceTypeWeights_b__50_0(::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a1, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET))(this, a1, a2);
		}

	};
