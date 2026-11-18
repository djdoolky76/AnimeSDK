#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define HHJKHIONDFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D2CE80)
#define HHJKHIONDFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D2CD20)
#define HHJKHIONDFC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2CE70)

inline static constexpr unsigned int HHJKHIONDFC_TypeDefinitionIndex = 39985;

class HHJKHIONDFC : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x20
	::UnityEngine::UI::Text* MFKBCHAJOGK; // 0x28
	::MonoUITableScrollV2* FHIGAJCDDMB; // 0x30
	::UnityEngine::UI::Text* HKIPALPLCEN; // 0x38
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x40
	::UnityEngine::UI::Text* OPKDLALOLEB; // 0x48
	::UnityEngine::UI::Text* HFJGFOLKIMA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKHIONDFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHJKHIONDFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHJKHIONDFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
