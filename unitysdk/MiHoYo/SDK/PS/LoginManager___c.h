#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC79F0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC7A30)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET UNITYSDK_OFFSET(0x1DEC7A40)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 20204;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xAC20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xAC28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET))(this);
		}
	};
}
