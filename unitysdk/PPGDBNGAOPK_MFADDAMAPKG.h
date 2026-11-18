#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PPGDBNGAOPK_MFADDAMAPKG_PLEKKPLEELB_OFFSET UNITYSDK_OFFSET(0x1BF3B1A0)
#define PPGDBNGAOPK_MFADDAMAPKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3B190)

inline static constexpr unsigned int PPGDBNGAOPK_MFADDAMAPKG_TypeDefinitionIndex = 70859;

class PPGDBNGAOPK_MFADDAMAPKG : public ::System::Object
{
public:
	::System::Action* FOIOCDBDFIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_MFADDAMAPKG__CTOR_OFFSET))(this);
	}

	::System::Void PLEKKPLEELB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_MFADDAMAPKG_PLEKKPLEELB_OFFSET))(this);
	}
};
