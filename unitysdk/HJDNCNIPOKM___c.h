#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HJDNCNIPOKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18204D60)
#define HJDNCNIPOKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18204DA0)
#define HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET UNITYSDK_OFFSET(0x18204DF0)
#define HJDNCNIPOKM___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET UNITYSDK_OFFSET(0x18204E10)
#define HJDNCNIPOKM___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET UNITYSDK_OFFSET(0x18204E30)
#define HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET UNITYSDK_OFFSET(0x18204DB0)
#define HJDNCNIPOKM___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET UNITYSDK_OFFSET(0x18204DD0)

inline static constexpr unsigned int HJDNCNIPOKM___c_TypeDefinitionIndex = 78889;

	class HJDNCNIPOKM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D60);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D68);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D70);
		}

		static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D80);
		}

		static ::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>** StaticGet___9__50_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D88);
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
