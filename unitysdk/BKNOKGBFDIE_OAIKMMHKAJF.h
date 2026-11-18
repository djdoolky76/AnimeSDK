#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE;
namespace MoleMole { class MonoBuffIcon; }
namespace System { class Action; }

#define BKNOKGBFDIE_OAIKMMHKAJF_LGKBOOPNJGE_OFFSET UNITYSDK_OFFSET(0xFF85350)
#define BKNOKGBFDIE_OAIKMMHKAJF__CTOR_OFFSET UNITYSDK_OFFSET(0xFF85340)

inline static constexpr unsigned int BKNOKGBFDIE_OAIKMMHKAJF_TypeDefinitionIndex = 57140;

class BKNOKGBFDIE_OAIKMMHKAJF : public ::System::Object
{
public:
	::BKNOKGBFDIE* KLHPEBKNIFB; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18
	::MoleMole::MonoBuffIcon* PABDGDPCMKF; // 0x20
	::System::Int32 BOBBHFPEPHC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_OAIKMMHKAJF__CTOR_OFFSET))(this);
	}

	::System::Void LGKBOOPNJGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_OAIKMMHKAJF_LGKBOOPNJGE_OFFSET))(this);
	}
};
