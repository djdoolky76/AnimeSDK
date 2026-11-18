#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OKMALJHGILJ_PMFAPDPMAJJ;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define OKMALJHGILJ_MFGNGELAGBF_GHCGGOHEIMM_OFFSET UNITYSDK_OFFSET(0x15FE8140)
#define OKMALJHGILJ_MFGNGELAGBF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8130)

inline static constexpr unsigned int OKMALJHGILJ_MFGNGELAGBF_TypeDefinitionIndex = 93185;

class OKMALJHGILJ_MFGNGELAGBF : public ::System::Object
{
public:
	::OKMALJHGILJ_PMFAPDPMAJJ* EEMOEMFLABI; // 0x10
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMALJHGILJ_MFGNGELAGBF__CTOR_OFFSET))(this);
	}

	::System::Void GHCGGOHEIMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMALJHGILJ_MFGNGELAGBF_GHCGGOHEIMM_OFFSET))(this);
	}
};
