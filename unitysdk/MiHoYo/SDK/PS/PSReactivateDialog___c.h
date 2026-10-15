#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PS { class PSReactivateDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF6C040)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6C080)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BF6C090)

namespace MiHoYo::SDK::PS
{
	class PSReactivateDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x18380);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x18388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::MiHoYo::SDK::PS::PSReactivateDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__SHOW_B__8_0_OFFSET))(this, a1);
		}

	};
}
