#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class EJIINBAIOCF_FFMPNDONKAO;
namespace MoleMole { class UIInLevelEavesdropChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define EJIINBAIOCF_FDJIBADLEBK_OFFSET UNITYSDK_OFFSET(0x17240F90)
#define EJIINBAIOCF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x17240EC0)
#define EJIINBAIOCF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x17240EB0)
#define EJIINBAIOCF_OHJEEBIILAF_OFFSET UNITYSDK_OFFSET(0x17241300)
#define EJIINBAIOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x17240F80)

inline static constexpr unsigned int EJIINBAIOCF_TypeDefinitionIndex = 59040;

class EJIINBAIOCF : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelEavesdropChildWindowController* NMCMLHIHPPF; // 0x28
	::EJIINBAIOCF_FFMPNDONKAO* OBGBFHGKILC; // 0x30
	::System::Boolean IIKMFEBDADI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EJIINBAIOCF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void FDJIBADLEBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_FDJIBADLEBK_OFFSET))(this);
	}

	::System::Void OHJEEBIILAF(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EJIINBAIOCF_OHJEEBIILAF_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}
};
