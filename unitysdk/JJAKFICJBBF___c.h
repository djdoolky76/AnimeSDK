#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class IFBFJDCECML;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JJAKFICJBBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6CDEB0)
#define JJAKFICJBBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CDEF0)
#define JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C6CDF00)
#define JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C6CDF10)

inline static constexpr unsigned int JJAKFICJBBF___c_TypeDefinitionIndex = 37280;

	class JJAKFICJBBF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>, ::IFBFJDCECML*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>, ::IFBFJDCECML*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10FC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10FC8);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>, ::System::Single>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAKFICJBBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C_CTOR_OFFSET))(this);
		}

		::System::Single _ComputeNowFightCatRanksWithEntity_b__8_0(::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*> a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET))(this, a1);
		}

		::IFBFJDCECML* _ComputeNowFightCatRanksWithEntity_b__8_1(::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*> a1)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::IFBFJDCECML*>))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET))(this, a1);
		}

	};
