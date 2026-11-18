#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OHPDLOMMGEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B78E950)
#define OHPDLOMMGEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B78E890)
#define OHPDLOMMGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78E940)

inline static constexpr unsigned int OHPDLOMMGEN_TypeDefinitionIndex = 76906;

class OHPDLOMMGEN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PKMDFCGADDJ; // 0x18
	::MoleMole::MonoGamepadModule* FECAIEJFFLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPDLOMMGEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHPDLOMMGEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHPDLOMMGEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
