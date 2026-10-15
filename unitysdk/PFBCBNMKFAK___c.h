#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFBCBNMKFAK;
namespace System { class Object; }

#define PFBCBNMKFAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF22130)
#define PFBCBNMKFAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF22170)
#define PFBCBNMKFAK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF22180)

	class PFBCBNMKFAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ADC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFBCBNMKFAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK___C_CTOR_OFFSET))(this);
		}

		::PFBCBNMKFAK* __cctor_b__33_0()
		{
			return ((::PFBCBNMKFAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBCBNMKFAK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
