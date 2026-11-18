#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HEDBPDICFHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B42880)
#define HEDBPDICFHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B42760)
#define HEDBPDICFHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B42870)

inline static constexpr unsigned int HEDBPDICFHB_TypeDefinitionIndex = 57715;

class HEDBPDICFHB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GODMFJKAFFE; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDBPDICFHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEDBPDICFHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEDBPDICFHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
