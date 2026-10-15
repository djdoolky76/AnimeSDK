#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BKFGDHHFNKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7AE860)
#define BKFGDHHFNKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AE8A0)
#define BKFGDHHFNKP___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET UNITYSDK_OFFSET(0xB7AE8B0)

inline static constexpr unsigned int BKFGDHHFNKP___c_TypeDefinitionIndex = 77608;

	class BKFGDHHFNKP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E920);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKFGDHHFNKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TryApplySummonAction_b__5_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BKFGDHHFNKP___C___TRYAPPLYSUMMONACTION_B__5_0_OFFSET))(this, a1);
		}

	};
