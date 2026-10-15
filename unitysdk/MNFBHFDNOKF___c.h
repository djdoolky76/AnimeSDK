#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/System/Object.h"
class MNFBHFDNOKF;
namespace System { class Object; }

#define MNFBHFDNOKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA96DD0)
#define MNFBHFDNOKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA96E00)
#define MNFBHFDNOKF___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EA96E10)
#define MNFBHFDNOKF___C___CCTOR_B__68_1_OFFSET UNITYSDK_OFFSET(0x1EA96E40)
#define MNFBHFDNOKF___C___CCTOR_B__68_2_OFFSET UNITYSDK_OFFSET(0x1EA96E50)

	class MNFBHFDNOKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNFBHFDNOKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBHFDNOKF___C_CTOR_OFFSET))(this);
		}

		::MNFBHFDNOKF* __cctor_b__68_0()
		{
			return ((::MNFBHFDNOKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFBHFDNOKF___C___CCTOR_B__68_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__68_1(::CFMDKNCDDAL a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CFMDKNCDDAL))((::PBYTE)hIl2Cpp + MNFBHFDNOKF___C___CCTOR_B__68_1_OFFSET))(this, a1);
		}

		::CFMDKNCDDAL __cctor_b__68_2(::System::Int32 a1)
		{
			return ((::CFMDKNCDDAL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNFBHFDNOKF___C___CCTOR_B__68_2_OFFSET))(this, a1);
		}

	};
