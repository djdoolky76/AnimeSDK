#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHCKKNGNKHK;
namespace System { class Object; }

#define MHCKKNGNKHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D160)
#define MHCKKNGNKHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D190)
#define MHCKKNGNKHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA2D1A0)

	class MHCKKNGNKHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C_CTOR_OFFSET))(this);
		}

		::MHCKKNGNKHK* __cctor_b__28_0()
		{
			return ((::MHCKKNGNKHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
