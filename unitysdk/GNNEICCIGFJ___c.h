#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GNNEICCIGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B1DB10)
#define GNNEICCIGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DB50)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_0_OFFSET UNITYSDK_OFFSET(0x15B1DC00)
#define GNNEICCIGFJ___C___EVALUATECUSTOMTALK_B__9_1_OFFSET UNITYSDK_OFFSET(0x15B1DC50)
#define GNNEICCIGFJ___C___EVALUATEMODIFIERCONTAINER_B__6_0_OFFSET UNITYSDK_OFFSET(0x15B1DB60)
#define GNNEICCIGFJ___C___EVALUATESPAWNALLYNPCHIPPLENMINI_B__7_0_OFFSET UNITYSDK_OFFSET(0x15B1DBB0)

	class GNNEICCIGFJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CAE0);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CAE8);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CAF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CAF8);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CB00);
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
