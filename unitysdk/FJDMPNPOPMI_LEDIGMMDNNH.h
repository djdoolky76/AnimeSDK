#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FJDMPNPOPMI_LEDIGMMDNNH_FJBICIJFFHN_OFFSET UNITYSDK_OFFSET(0x191CA4A0)
#define FJDMPNPOPMI_LEDIGMMDNNH__CTOR_OFFSET UNITYSDK_OFFSET(0x191CA490)

inline static constexpr unsigned int FJDMPNPOPMI_LEDIGMMDNNH_TypeDefinitionIndex = 51276;

class FJDMPNPOPMI_LEDIGMMDNNH : public ::System::Object
{
public:
	::System::Action* AMHGBGMOMLL; // 0x10
	::System::Boolean ONEBOLCOFFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_LEDIGMMDNNH__CTOR_OFFSET))(this);
	}

	::System::Void FJBICIJFFHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDMPNPOPMI_LEDIGMMDNNH_FJBICIJFFHN_OFFSET))(this);
	}
};
