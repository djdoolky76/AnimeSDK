#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLGJDILNNDH;
namespace System { class Object; }

#define KLGJDILNNDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88BD70)
#define KLGJDILNNDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88BDB0)
#define KLGJDILNNDH___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E88BDC0)

	class KLGJDILNNDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x208E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGJDILNNDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGJDILNNDH___C_CTOR_OFFSET))(this);
		}

		::KLGJDILNNDH* __cctor_b__73_0()
		{
			return ((::KLGJDILNNDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGJDILNNDH___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
