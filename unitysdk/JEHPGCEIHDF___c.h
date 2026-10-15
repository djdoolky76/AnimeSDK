#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEHPGCEIHDF;
namespace System { class Object; }

#define JEHPGCEIHDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71C0F0)
#define JEHPGCEIHDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71C130)
#define JEHPGCEIHDF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E71C140)

	class JEHPGCEIHDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHPGCEIHDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF___C_CTOR_OFFSET))(this);
		}

		::JEHPGCEIHDF* __cctor_b__48_0()
		{
			return ((::JEHPGCEIHDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
