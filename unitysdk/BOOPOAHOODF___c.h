#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOOPOAHOODF;
namespace System { class Object; }

#define BOOPOAHOODF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03EDF0)
#define BOOPOAHOODF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03EE30)
#define BOOPOAHOODF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E03EE40)

	class BOOPOAHOODF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOPOAHOODF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF___C_CTOR_OFFSET))(this);
		}

		::BOOPOAHOODF* __cctor_b__23_0()
		{
			return ((::BOOPOAHOODF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
