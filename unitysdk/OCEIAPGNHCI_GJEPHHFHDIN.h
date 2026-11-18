#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OCEIAPGNHCI;
namespace System { class Action; }

#define OCEIAPGNHCI_GJEPHHFHDIN_KABKFPMJEED_OFFSET UNITYSDK_OFFSET(0x1291E090)
#define OCEIAPGNHCI_GJEPHHFHDIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1291E080)

inline static constexpr unsigned int OCEIAPGNHCI_GJEPHHFHDIN_TypeDefinitionIndex = 41470;

class OCEIAPGNHCI_GJEPHHFHDIN : public ::System::Object
{
public:
	::OCEIAPGNHCI* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_GJEPHHFHDIN__CTOR_OFFSET))(this);
	}

	::System::Void KABKFPMJEED(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_GJEPHHFHDIN_KABKFPMJEED_OFFSET))(this, PIIPCLCCOIG);
	}
};
