#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIKDCJJPLPI;
namespace MoleMole { class UIInLevelPauseDialogContext; }

#define KIKDCJJPLPI_CPNFAJEONBM_MAPAAPHFJJN_OFFSET UNITYSDK_OFFSET(0x15211880)
#define KIKDCJJPLPI_CPNFAJEONBM__CTOR_OFFSET UNITYSDK_OFFSET(0x15211870)

inline static constexpr unsigned int KIKDCJJPLPI_CPNFAJEONBM_TypeDefinitionIndex = 77797;

class KIKDCJJPLPI_CPNFAJEONBM : public ::System::Object
{
public:
	::MoleMole::UIInLevelPauseDialogContext* AAOCANGHBDG; // 0x10
	::KIKDCJJPLPI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDCJJPLPI_CPNFAJEONBM__CTOR_OFFSET))(this);
	}

	::System::Void MAPAAPHFJJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDCJJPLPI_CPNFAJEONBM_MAPAAPHFJJN_OFFSET))(this);
	}
};
