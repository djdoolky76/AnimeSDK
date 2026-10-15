#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJBHHFGLKPD;
namespace System { class Object; }

#define LJBHHFGLKPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E976150)
#define LJBHHFGLKPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E976190)
#define LJBHHFGLKPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9761A0)

	class LJBHHFGLKPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJBHHFGLKPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD___C_CTOR_OFFSET))(this);
		}

		::LJBHHFGLKPD* __cctor_b__28_0()
		{
			return ((::LJBHHFGLKPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
