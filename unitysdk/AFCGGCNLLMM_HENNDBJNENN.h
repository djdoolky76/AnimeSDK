#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFCGGCNLLMM;
namespace MoleMole { class UIPinballOptionsDialogPopWindowController_Context; }

#define AFCGGCNLLMM_HENNDBJNENN_DIPAIFDDAJF_OFFSET UNITYSDK_OFFSET(0x154EEE30)
#define AFCGGCNLLMM_HENNDBJNENN__CTOR_OFFSET UNITYSDK_OFFSET(0x154EEE20)

inline static constexpr unsigned int AFCGGCNLLMM_HENNDBJNENN_TypeDefinitionIndex = 81015;

class AFCGGCNLLMM_HENNDBJNENN : public ::System::Object
{
public:
	::MoleMole::UIPinballOptionsDialogPopWindowController_Context* AAOCANGHBDG; // 0x10
	::AFCGGCNLLMM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM_HENNDBJNENN__CTOR_OFFSET))(this);
	}

	::System::Void DIPAIFDDAJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM_HENNDBJNENN_DIPAIFDDAJF_OFFSET))(this);
	}
};
