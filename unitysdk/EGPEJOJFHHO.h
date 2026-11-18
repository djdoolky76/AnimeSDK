#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EGPEJOJFHHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135491E0)
#define EGPEJOJFHHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135490C0)
#define EGPEJOJFHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x135491D0)

inline static constexpr unsigned int EGPEJOJFHHO_TypeDefinitionIndex = 63950;

class EGPEJOJFHHO : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GODMFJKAFFE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPEJOJFHHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPEJOJFHHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPEJOJFHHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
