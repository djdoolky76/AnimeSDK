#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FDOHFCFCDDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC17B0)
#define FDOHFCFCDDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC16A0)
#define FDOHFCFCDDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC17A0)

inline static constexpr unsigned int FDOHFCFCDDB_TypeDefinitionIndex = 81907;

class FDOHFCFCDDB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJHIPHJIFNI; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x30
	::UnityEngine::Transform* PJBNCNNNCFM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOHFCFCDDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDOHFCFCDDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDOHFCFCDDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
