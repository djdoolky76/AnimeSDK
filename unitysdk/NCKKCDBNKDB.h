#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NCKKCDBNKDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B63780)
#define NCKKCDBNKDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B63620)
#define NCKKCDBNKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B63770)

inline static constexpr unsigned int NCKKCDBNKDB_TypeDefinitionIndex = 69750;

class NCKKCDBNKDB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PCHCJJGKKKA; // 0x20
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x38
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x40
	::UnityEngine::GameObject* GMABNNKNIIF; // 0x48
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKKCDBNKDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCKKCDBNKDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCKKCDBNKDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
