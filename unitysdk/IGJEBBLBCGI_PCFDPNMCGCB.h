#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define IGJEBBLBCGI_PCFDPNMCGCB_NFIEBEAFONC_OFFSET UNITYSDK_OFFSET(0x15C0CA90)
#define IGJEBBLBCGI_PCFDPNMCGCB_PJHOCIPMKBI_OFFSET UNITYSDK_OFFSET(0x15C0CA80)
#define IGJEBBLBCGI_PCFDPNMCGCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0CA70)

inline static constexpr unsigned int IGJEBBLBCGI_PCFDPNMCGCB_TypeDefinitionIndex = 66310;

class IGJEBBLBCGI_PCFDPNMCGCB : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* ONMNDJEIMII; // 0x20
	::System::Boolean KPHPIJNGOCK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_PCFDPNMCGCB__CTOR_OFFSET))(this);
	}

	::System::Void PJHOCIPMKBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_PCFDPNMCGCB_PJHOCIPMKBI_OFFSET))(this);
	}

	::System::Void NFIEBEAFONC(::MoleMole::MultipleVideoPlayerManager* PMKFNOGFCNA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_PCFDPNMCGCB_NFIEBEAFONC_OFFSET))(this, PMKFNOGFCNA);
	}
};
