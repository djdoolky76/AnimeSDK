#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFNKNNFJILK;
namespace System { class Object; }

#define NFNKNNFJILK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB07910)
#define NFNKNNFJILK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB07950)
#define NFNKNNFJILK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB07960)

	class NFNKNNFJILK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFNKNNFJILK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK___C_CTOR_OFFSET))(this);
		}

		::NFNKNNFJILK* __cctor_b__23_0()
		{
			return ((::NFNKNNFJILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
