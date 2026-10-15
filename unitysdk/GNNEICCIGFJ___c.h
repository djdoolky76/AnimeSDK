#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GNNEICCIGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B12010)
#define GNNEICCIGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B12050)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_0_OFFSET UNITYSDK_OFFSET(0x15B12100)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_1_OFFSET UNITYSDK_OFFSET(0x15B12150)
#define GNNEICCIGFJ___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET UNITYSDK_OFFSET(0x15B12060)
#define GNNEICCIGFJ___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET UNITYSDK_OFFSET(0x15B120B0)

inline static constexpr unsigned int GNNEICCIGFJ___c_TypeDefinitionIndex = 77622;

	class GNNEICCIGFJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B820);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B828);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B830);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B838);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EvaluateModifierContainer_b__6_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 __EvaluateSpawnAllyNpcHipplenMini_b__7_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET))(this, a1);
		}

		::System::Int32 __EvaluateCustomTalk_b__9_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_0_OFFSET))(this, a1);
		}

		::System::UInt32 __EvaluateCustomTalk_b__9_1(::KAKADGHNMFK* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_1_OFFSET))(this, a1);
		}

	};
