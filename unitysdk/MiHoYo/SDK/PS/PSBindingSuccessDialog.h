#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A0AFA0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A0AFF0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A0AF50)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E9E2ED0CDD5AF821_OFFSET UNITYSDK_OFFSET(0x3A0B100)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_FBC0C6B604076C22_OFFSET UNITYSDK_OFFSET(0x3A0AA70)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A0AAE0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog_TypeDefinitionIndex = 12738;

	class PSBindingSuccessDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSBindingSuccessDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PS::PSBindingSuccessDialog**)Il2CppClass::FromTypeDefinitionIndex(PSBindingSuccessDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::GameObject* F5900F3CFCA8AFF0; // 0xB8
		::System::Action* OnConfirmed; // 0xC0
		::System::Single BDABB7898A0DA231; // 0xC8
		::System::Byte _padding0[0x4];
		::System::String* E149D8A7F5E85F25; // 0xD0
		::System::String* EB68D1C408C432F3; // 0xD8

		::System::Collections::IEnumerator* FBC0C6B604076C22()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_FBC0C6B604076C22_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* F72ADE84A7CA8ECF, ::System::String* F84B5F67F40C0E97)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_BFA7961FF2AC380B_OFFSET))(F72ADE84A7CA8ECF, F84B5F67F40C0E97);
		}

		::System::Void E9E2ED0CDD5AF821(::System::Single A11D4EC92205DAEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E9E2ED0CDD5AF821_OFFSET))(this, A11D4EC92205DAEE);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_E060FD75EC8EE726_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}
	};
}
