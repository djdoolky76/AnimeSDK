#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PopupDialog; }
namespace MiHoYo::SDK { class PopupDialog_E378B08AC15907B2; }
namespace System { class String; }

#define MIHOYO_SDK_POPUPDIALOG_ADBD914DFA2021BE_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A5BBB0)
#define MIHOYO_SDK_POPUPDIALOG_ADBD914DFA2021BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_ADBD914DFA2021BE_TypeDefinitionIndex = 13011;

	class PopupDialog_ADBD914DFA2021BE : public ::System::Object
	{
	public:
		::System::Boolean AD50E68261B23C47; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* E0C0689B1CEBE48C; // 0x18
		::System::String* A5BC92A532DDFC9A; // 0x20
		::System::String* BA95016C517C92D9; // 0x28
		::MiHoYo::SDK::PopupDialog_E378B08AC15907B2* E04D2BE64FCE9814; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ADBD914DFA2021BE__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::PopupDialog* FEEE7542A49EF58F)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ADBD914DFA2021BE_BF3138F24160F012_OFFSET))(this, FEEE7542A49EF58F);
		}
	};
}
