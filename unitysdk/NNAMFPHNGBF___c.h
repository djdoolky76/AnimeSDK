#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAMFPHNGBF;
namespace System { class Object; }

#define NNAMFPHNGBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F370)
#define NNAMFPHNGBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F3B0)
#define NNAMFPHNGBF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB7F3C0)

	class NNAMFPHNGBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAMFPHNGBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF___C_CTOR_OFFSET))(this);
		}

		::NNAMFPHNGBF* __cctor_b__43_0()
		{
			return ((::NNAMFPHNGBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
