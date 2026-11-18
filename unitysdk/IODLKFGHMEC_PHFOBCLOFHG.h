#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODLKFGHMEC;
namespace MoleMole { class UIInLevelCameraHackChildWindowController; }
namespace System { class Action; }

#define IODLKFGHMEC_PHFOBCLOFHG_NJKNHBAKPMH_OFFSET UNITYSDK_OFFSET(0x15C27BD0)
#define IODLKFGHMEC_PHFOBCLOFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C27890)

inline static constexpr unsigned int IODLKFGHMEC_PHFOBCLOFHG_TypeDefinitionIndex = 44641;

class IODLKFGHMEC_PHFOBCLOFHG : public ::System::Object
{
public:
	::System::Action* NJJPAJNJFOJ; // 0x10
	::MoleMole::UIInLevelCameraHackChildWindowController* JOLDOMEIKEF; // 0x18
	::IODLKFGHMEC* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_PHFOBCLOFHG__CTOR_OFFSET))(this);
	}

	::System::Void NJKNHBAKPMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_PHFOBCLOFHG_NJKNHBAKPMH_OFFSET))(this);
	}
};
