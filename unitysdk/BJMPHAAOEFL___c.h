#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJMPHAAOEFL;
namespace System { class Object; }

#define BJMPHAAOEFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A870)
#define BJMPHAAOEFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A8B0)
#define BJMPHAAOEFL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF4A8C0)

	class BJMPHAAOEFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJMPHAAOEFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL___C_CTOR_OFFSET))(this);
		}

		::BJMPHAAOEFL* __cctor_b__28_0()
		{
			return ((::BJMPHAAOEFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMPHAAOEFL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
