#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeCompanionPlayChildWindowController; }

#define PEDFBHLLIBA_BHKNANGPCAB_DMDFHOHCMBE_OFFSET UNITYSDK_OFFSET(0x1FE17A30)
#define PEDFBHLLIBA_BHKNANGPCAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE17A20)

inline static constexpr unsigned int PEDFBHLLIBA_BHKNANGPCAB_TypeDefinitionIndex = 96459;

class PEDFBHLLIBA_BHKNANGPCAB : public ::System::Object
{
public:
	::MoleMole::UIArcadeCompanionPlayChildWindowController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA_BHKNANGPCAB__CTOR_OFFSET))(this);
	}

	::System::Void DMDFHOHCMBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA_BHKNANGPCAB_DMDFHOHCMBE_OFFSET))(this);
	}
};
