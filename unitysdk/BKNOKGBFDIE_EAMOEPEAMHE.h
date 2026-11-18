#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE_OEMPNIALGDH;
namespace MoleMole { class MonoBuffIcon; }

#define BKNOKGBFDIE_EAMOEPEAMHE_IIINLHCLNDM_OFFSET UNITYSDK_OFFSET(0x18DA29F0)
#define BKNOKGBFDIE_EAMOEPEAMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA29E0)

inline static constexpr unsigned int BKNOKGBFDIE_EAMOEPEAMHE_TypeDefinitionIndex = 57143;

class BKNOKGBFDIE_EAMOEPEAMHE : public ::System::Object
{
public:
	::MoleMole::MonoBuffIcon* PABDGDPCMKF; // 0x10
	::BKNOKGBFDIE_OEMPNIALGDH* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_EAMOEPEAMHE__CTOR_OFFSET))(this);
	}

	::System::Void IIINLHCLNDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_EAMOEPEAMHE_IIINLHCLNDM_OFFSET))(this);
	}
};
