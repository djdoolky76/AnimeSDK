#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPOBHGDIKN;
namespace System { class Object; }

#define BOPOBHGDIKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03FF30)
#define BOPOBHGDIKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03FF60)
#define BOPOBHGDIKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E03FF70)

	class BOPOBHGDIKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C_CTOR_OFFSET))(this);
		}

		::BOPOBHGDIKN* __cctor_b__23_0()
		{
			return ((::BOPOBHGDIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
