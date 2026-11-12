#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GNNEICCIGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA3260)
#define GNNEICCIGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16AA32A0)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_0_OFFSET UNITYSDK_OFFSET(0x16AA3350)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_1_OFFSET UNITYSDK_OFFSET(0x16AA33A0)
#define GNNEICCIGFJ___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET UNITYSDK_OFFSET(0x16AA32B0)
#define GNNEICCIGFJ___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET UNITYSDK_OFFSET(0x16AA3300)

inline static constexpr unsigned int GNNEICCIGFJ___c_TypeDefinitionIndex = 80358;

	class GNNEICCIGFJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DDA0);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DDA8);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DDB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DDB8);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DDC0);
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
