#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLJHLKBNGEC;
namespace System { class Object; }

#define BLJHLKBNGEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF65E80)
#define BLJHLKBNGEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF65EC0)
#define BLJHLKBNGEC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF65ED0)

	class BLJHLKBNGEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJHLKBNGEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC___C_CTOR_OFFSET))(this);
		}

		::BLJHLKBNGEC* __cctor_b__18_0()
		{
			return ((::BLJHLKBNGEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLKBNGEC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
