#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSBindingSuccessDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_B7991918ED793E80_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A109D0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_B7991918ED793E80__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog_B7991918ED793E80_TypeDefinitionIndex = 12736;

	class PSBindingSuccessDialog_B7991918ED793E80 : public ::System::Object
	{
	public:
		::System::String* F72ADE84A7CA8ECF; // 0x10
		::System::String* F84B5F67F40C0E97; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_B7991918ED793E80__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::PS::PSBindingSuccessDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSBindingSuccessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG_B7991918ED793E80_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
