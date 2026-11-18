#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE_OEMPNIALGDH;
namespace MoleMole { class MonoBuffIcon; }

#define BKNOKGBFDIE_ILOECHEGIAC_EEEBHDEMGII_OFFSET UNITYSDK_OFFSET(0xF7A6E10)
#define BKNOKGBFDIE_ILOECHEGIAC__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A5260)

inline static constexpr unsigned int BKNOKGBFDIE_ILOECHEGIAC_TypeDefinitionIndex = 57141;

class BKNOKGBFDIE_ILOECHEGIAC : public ::System::Object
{
public:
	::BKNOKGBFDIE_OEMPNIALGDH* FGBNBFHOKAA; // 0x10
	::MoleMole::MonoBuffIcon* PABDGDPCMKF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_ILOECHEGIAC__CTOR_OFFSET))(this);
	}

	::System::Void EEEBHDEMGII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_ILOECHEGIAC_EEEBHDEMGII_OFFSET))(this);
	}
};
