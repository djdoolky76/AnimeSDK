#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }

#define NMMDCJGKHOB_JBKJMGAHINA_MKFAENEAPJO_OFFSET UNITYSDK_OFFSET(0x11F89150)
#define NMMDCJGKHOB_JBKJMGAHINA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89140)

inline static constexpr unsigned int NMMDCJGKHOB_JBKJMGAHINA_TypeDefinitionIndex = 54827;

class NMMDCJGKHOB_JBKJMGAHINA : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* HMDKKCKDOFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_JBKJMGAHINA__CTOR_OFFSET))(this);
	}

	::System::Void MKFAENEAPJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_JBKJMGAHINA_MKFAENEAPJO_OFFSET))(this);
	}
};
