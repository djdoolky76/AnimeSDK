#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE;
namespace MoleMole { class MonoBuffIcon; }

#define BKNOKGBFDIE_OEMPNIALGDH_FECEFOCKHOD_OFFSET UNITYSDK_OFFSET(0x18DA2BB0)
#define BKNOKGBFDIE_OEMPNIALGDH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA2BA0)

inline static constexpr unsigned int BKNOKGBFDIE_OEMPNIALGDH_TypeDefinitionIndex = 57138;

class BKNOKGBFDIE_OEMPNIALGDH : public ::System::Object
{
public:
	::MoleMole::MonoBuffIcon* BIIIOGFKJAI; // 0x10
	::BKNOKGBFDIE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_OEMPNIALGDH__CTOR_OFFSET))(this);
	}

	::System::Void FECEFOCKHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_OEMPNIALGDH_FECEFOCKHOD_OFFSET))(this);
	}
};
