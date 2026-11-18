#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KCMOCJIKOBE_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x13C53830)
#define KCMOCJIKOBE_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x13C53840)
#define KCMOCJIKOBE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53820)

inline static constexpr unsigned int KCMOCJIKOBE_TypeDefinitionIndex = 52019;

class KCMOCJIKOBE : public ::System::Object
{
public:
	::System::Object* _OIKODLNEIJB_k__BackingField; // 0x10
	::System::String* _IBEDOHPILNE_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + KCMOCJIKOBE__CTOR_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMOCJIKOBE_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Object* PEOEBEBFIJO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMOCJIKOBE_PEOEBEBFIJO_OFFSET))(this);
	}
};
