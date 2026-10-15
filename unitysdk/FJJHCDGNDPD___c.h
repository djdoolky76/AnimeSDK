#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJJHCDGNDPD;
namespace System { class Object; }

#define FJJHCDGNDPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4700)
#define FJJHCDGNDPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4740)
#define FJJHCDGNDPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3A4750)

	class FJJHCDGNDPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJJHCDGNDPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD___C_CTOR_OFFSET))(this);
		}

		::FJJHCDGNDPD* __cctor_b__28_0()
		{
			return ((::FJJHCDGNDPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
