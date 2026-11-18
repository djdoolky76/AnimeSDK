#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IODLKFGHMEC_IAHNMPGHNGJ;
namespace MoleMole { class UIInLevelCameraHackChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define IODLKFGHMEC_FDJIBADLEBK_OFFSET UNITYSDK_OFFSET(0x15C278A0)
#define IODLKFGHMEC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x15C272C0)
#define IODLKFGHMEC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x15C272B0)
#define IODLKFGHMEC_OHJEEBIILAF_OFFSET UNITYSDK_OFFSET(0x15C27390)
#define IODLKFGHMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C27380)

inline static constexpr unsigned int IODLKFGHMEC_TypeDefinitionIndex = 44640;

class IODLKFGHMEC : public ::DDHEGIHEKLH
{
public:
	::IODLKFGHMEC_IAHNMPGHNGJ* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelCameraHackChildWindowController* OGKHFLEOBJG; // 0x30
	::System::Boolean IIKMFEBDADI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IODLKFGHMEC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void OHJEEBIILAF(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IODLKFGHMEC_OHJEEBIILAF_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}

	::System::Void FDJIBADLEBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_FDJIBADLEBK_OFFSET))(this);
	}
};
