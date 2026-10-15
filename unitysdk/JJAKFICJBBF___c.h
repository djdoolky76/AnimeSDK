#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class IFBFJDCECML;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JJAKFICJBBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6FC170)
#define JJAKFICJBBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FC1B0)
#define JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C6FC1C0)
#define JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C6FC1D0)

inline static constexpr unsigned int JJAKFICJBBF___c_TypeDefinitionIndex = 37280;

	class JJAKFICJBBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x110F0);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::Single>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x110F8);
		}

		static ::System::Func_2<::System::ValueTuple, ::IFBFJDCECML*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::ValueTuple, ::IFBFJDCECML*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAKFICJBBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C_CTOR_OFFSET))(this);
		}

		::System::Single _ComputeNowFightCatRanksWithEntity_b__8_0(::System::ValueTuple a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET))(this, a1);
		}

		::IFBFJDCECML* _ComputeNowFightCatRanksWithEntity_b__8_1(::System::ValueTuple a1)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + JJAKFICJBBF___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET))(this, a1);
		}

	};
