#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssArpeggioTalentPageController; }
namespace MoleMole { class UIAbyssArpeggioTalentRowWidgetController; }

#define NCKLEONBIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1157F300)

inline static constexpr unsigned int NCKLEONBIDH_TypeDefinitionIndex = 73339;

class NCKLEONBIDH : public ::System::Object
{
public:
	::MoleMole::UIAbyssArpeggioTalentPageController* LGPGPOEMPLO; // 0x10
	::MoleMole::UIAbyssArpeggioTalentRowWidgetController* OFMJDNPKEFA; // 0x18
	::System::Int32 GBPFBDJJPJO; // 0x20
	::System::Int32 DADGNKKCELC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLEONBIDH__CTOR_OFFSET))(this);
	}
};
