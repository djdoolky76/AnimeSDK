#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PJEJIAEDLFG_GHANCIECCFI_FDIBNHJJBJA_OFFSET UNITYSDK_OFFSET(0x194A9EF0)
#define PJEJIAEDLFG_GHANCIECCFI__CTOR_OFFSET UNITYSDK_OFFSET(0x194A9EE0)

inline static constexpr unsigned int PJEJIAEDLFG_GHANCIECCFI_TypeDefinitionIndex = 45432;

class PJEJIAEDLFG_GHANCIECCFI : public ::System::Object
{
public:
	::System::Action* ILFCNKCEBNH; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_GHANCIECCFI__CTOR_OFFSET))(this);
	}

	::System::Void FDIBNHJJBJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_GHANCIECCFI_FDIBNHJJBJA_OFFSET))(this);
	}
};
