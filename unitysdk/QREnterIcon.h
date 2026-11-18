#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EABNMEAOMOE_JEHGCOHMOEO;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define QRENTERICON_INITBUTTONTIPS_OFFSET UNITYSDK_OFFSET(0x6A3A80)
#define QRENTERICON_ONENTERAPPICON_OFFSET UNITYSDK_OFFSET(0x6A3A90)
#define QRENTERICON_ONEXITAPPICON_OFFSET UNITYSDK_OFFSET(0x6A3AA0)

inline static constexpr unsigned int QREnterIcon_TypeDefinitionIndex = 43057;

struct alignas(8) QREnterIcon
{
	::EABNMEAOMOE_JEHGCOHMOEO* appIconView; // 0x10
	::UnityEngine::GameObject* iconGameObject; // 0x18
	::System::Boolean isCreated; // 0x20
	::System::Byte _padding0[0x7];
	::System::String* tipText; // 0x28

	::System::Void InitButtonTips()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_INITBUTTONTIPS_OFFSET))(this);
	}

	::System::Void OnEnterAppIcon()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_ONENTERAPPICON_OFFSET))(this);
	}

	::System::Void OnExitAppIcon()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_ONEXITAPPICON_OFFSET))(this);
	}
};
