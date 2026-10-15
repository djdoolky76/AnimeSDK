#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPJJHGJOGOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD614B0)
#define GPJJHGJOGOP_PPDAGPPKEJD_1_OFFSET UNITYSDK_OFFSET(0x1DD614E0)
#define GPJJHGJOGOP_PPDAGPPKEJD_2_OFFSET UNITYSDK_OFFSET(0x1DD61550)
#define GPJJHGJOGOP_PPDAGPPKEJD_OFFSET UNITYSDK_OFFSET(0x1DD614C0)

	class GPJJHGJOGOP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJHGJOGOP_CTOR_OFFSET))(this);
		}

		static ::System::Boolean PPDAGPPKEJD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJJHGJOGOP_PPDAGPPKEJD_OFFSET))(a1, a2);
		}

		static ::System::Boolean PPDAGPPKEJD_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJJHGJOGOP_PPDAGPPKEJD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PPDAGPPKEJD_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJJHGJOGOP_PPDAGPPKEJD_2_OFFSET))(a1, a2, a3, a4);
		}

	};
