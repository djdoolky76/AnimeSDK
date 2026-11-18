#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define INOMKIHDNAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF8808F0)
#define INOMKIHDNAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF8807B0)
#define INOMKIHDNAB__CTOR_OFFSET UNITYSDK_OFFSET(0xF8808E0)

inline static constexpr unsigned int INOMKIHDNAB_TypeDefinitionIndex = 77199;

class INOMKIHDNAB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* LKIIFLODLAH; // 0x18
	::UnityEngine::GameObject* CONPMIIPPOP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DMKIDFNMHBE; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GGIKNHIPBIC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOMKIHDNAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INOMKIHDNAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INOMKIHDNAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
