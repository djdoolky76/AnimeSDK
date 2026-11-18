#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OCEIAPGNHCI_EDHMEFEOHME_PJHODDBIPAC_OFFSET UNITYSDK_OFFSET(0x14F60890)
#define OCEIAPGNHCI_EDHMEFEOHME__CTOR_OFFSET UNITYSDK_OFFSET(0x14F60880)

inline static constexpr unsigned int OCEIAPGNHCI_EDHMEFEOHME_TypeDefinitionIndex = 41467;

class OCEIAPGNHCI_EDHMEFEOHME : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_EDHMEFEOHME__CTOR_OFFSET))(this);
	}

	::System::Void PJHODDBIPAC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_EDHMEFEOHME_PJHODDBIPAC_OFFSET))(this, PIIPCLCCOIG);
	}
};
