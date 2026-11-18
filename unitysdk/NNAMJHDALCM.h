#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define NNAMJHDALCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172A5EB0)
#define NNAMJHDALCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x172A5D50)
#define NNAMJHDALCM__CTOR_OFFSET UNITYSDK_OFFSET(0x172A5EA0)

inline static constexpr unsigned int NNAMJHDALCM_TypeDefinitionIndex = 82444;

class NNAMJHDALCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::UnityEngine::GameObject* GMABNNKNIIF; // 0x20
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x38
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x40
	::UnityEngine::UI::Text* PCHCJJGKKKA; // 0x48
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMJHDALCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNAMJHDALCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNAMJHDALCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
