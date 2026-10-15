#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IANCKAHGKMI;
namespace System { class Object; }

#define IANCKAHGKMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E609D50)
#define IANCKAHGKMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E609D90)
#define IANCKAHGKMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E609DA0)

	class IANCKAHGKMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANCKAHGKMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI___C_CTOR_OFFSET))(this);
		}

		::IANCKAHGKMI* __cctor_b__23_0()
		{
			return ((::IANCKAHGKMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANCKAHGKMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
