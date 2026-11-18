#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }

#define BHLOGGIFOMM_NHEIGDGAICD_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0xFF74620)
#define BHLOGGIFOMM_NHEIGDGAICD__CTOR_OFFSET UNITYSDK_OFFSET(0xFF74610)

inline static constexpr unsigned int BHLOGGIFOMM_NHEIGDGAICD_TypeDefinitionIndex = 57400;

class BHLOGGIFOMM_NHEIGDGAICD : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_NHEIGDGAICD__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigInLevelCustomized* HOLMEPGEFBO()
	{
		return ((::MoleMole::ConfigInLevelCustomized*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLOGGIFOMM_NHEIGDGAICD_HOLMEPGEFBO_OFFSET))(this);
	}
};
