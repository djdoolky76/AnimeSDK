#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OCEIAPGNHCI_GIINNHLPBPK_GDPKLBEDPJK_OFFSET UNITYSDK_OFFSET(0xE0E6CE0)
#define OCEIAPGNHCI_GIINNHLPBPK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E6CD0)

inline static constexpr unsigned int OCEIAPGNHCI_GIINNHLPBPK_TypeDefinitionIndex = 41469;

class OCEIAPGNHCI_GIINNHLPBPK : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_GIINNHLPBPK__CTOR_OFFSET))(this);
	}

	::System::Void GDPKLBEDPJK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_GIINNHLPBPK_GDPKLBEDPJK_OFFSET))(this, PIIPCLCCOIG);
	}
};
