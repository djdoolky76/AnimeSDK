#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIMFIHOAFM;
namespace System { class Object; }

#define KJIMFIHOAFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86E450)
#define KJIMFIHOAFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E490)
#define KJIMFIHOAFM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E86E4A0)

	class KJIMFIHOAFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJIMFIHOAFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM___C_CTOR_OFFSET))(this);
		}

		::KJIMFIHOAFM* __cctor_b__23_0()
		{
			return ((::KJIMFIHOAFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMFIHOAFM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
