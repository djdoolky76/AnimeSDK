#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD09C0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD0A00)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__SHOWBINDTAPTAPVIEW_B__41_0_OFFSET UNITYSDK_OFFSET(0x1BCD0A10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c_TypeDefinitionIndex = 9391;

	class BindManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2D0E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2D0E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindTapTapView_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__SHOWBINDTAPTAPVIEW_B__41_0_OFFSET))(this);
		}

	};
}
