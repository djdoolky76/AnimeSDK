#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONCGFIALKHI;
namespace System { class Object; }

#define ONCGFIALKHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3240)
#define ONCGFIALKHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3280)
#define ONCGFIALKHI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DEC3290)

	class ONCGFIALKHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONCGFIALKHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI___C_CTOR_OFFSET))(this);
		}

		::ONCGFIALKHI* __cctor_b__48_0()
		{
			return ((::ONCGFIALKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
