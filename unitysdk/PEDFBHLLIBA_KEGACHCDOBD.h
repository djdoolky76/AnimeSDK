#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeCompanionPlayChildWindowController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define PEDFBHLLIBA_KEGACHCDOBD_AALHLCKJLCJ_OFFSET UNITYSDK_OFFSET(0x1F72A860)
#define PEDFBHLLIBA_KEGACHCDOBD_JBOJILAFNHJ_OFFSET UNITYSDK_OFFSET(0x1F72A850)
#define PEDFBHLLIBA_KEGACHCDOBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F72A840)

inline static constexpr unsigned int PEDFBHLLIBA_KEGACHCDOBD_TypeDefinitionIndex = 96460;

class PEDFBHLLIBA_KEGACHCDOBD : public ::System::Object
{
public:
	::MoleMole::UIArcadeCompanionPlayChildWindowController* JOLDOMEIKEF; // 0x10
	::MoleMole::UIGeneralTipsPopWindowController* INGMECJPIGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA_KEGACHCDOBD__CTOR_OFFSET))(this);
	}

	::System::Void JBOJILAFNHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA_KEGACHCDOBD_JBOJILAFNHJ_OFFSET))(this);
	}

	::System::Void AALHLCKJLCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDFBHLLIBA_KEGACHCDOBD_AALHLCKJLCJ_OFFSET))(this);
	}
};
