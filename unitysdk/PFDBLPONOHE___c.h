#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJCMNENIEHH.h"
#include "unitysdk/System/Object.h"
class PFDBLPONOHE;
namespace System { class Object; }

#define PFDBLPONOHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF23E10)
#define PFDBLPONOHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF23E50)
#define PFDBLPONOHE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF23E60)
#define PFDBLPONOHE___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x1DF23EB0)
#define PFDBLPONOHE___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x1DF23EC0)

	class PFDBLPONOHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFDBLPONOHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE___C_CTOR_OFFSET))(this);
		}

		::PFDBLPONOHE* __cctor_b__33_0()
		{
			return ((::PFDBLPONOHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE___C___CCTOR_B__33_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__33_1(::PJCMNENIEHH a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PJCMNENIEHH))((::PBYTE)hIl2Cpp + PFDBLPONOHE___C___CCTOR_B__33_1_OFFSET))(this, a1);
		}

		::PJCMNENIEHH __cctor_b__33_2(::System::Int32 a1)
		{
			return ((::PJCMNENIEHH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFDBLPONOHE___C___CCTOR_B__33_2_OFFSET))(this, a1);
		}

	};
