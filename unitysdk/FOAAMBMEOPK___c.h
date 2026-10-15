#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOAAMBMEOPK;
namespace System { class Object; }

#define FOAAMBMEOPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6840)
#define FOAAMBMEOPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6880)
#define FOAAMBMEOPK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F6890)

	class FOAAMBMEOPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOAAMBMEOPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK___C_CTOR_OFFSET))(this);
		}

		::FOAAMBMEOPK* __cctor_b__28_0()
		{
			return ((::FOAAMBMEOPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAAMBMEOPK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
