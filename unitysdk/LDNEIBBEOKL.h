#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LDNEIBBEOKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A306AA0)
#define LDNEIBBEOKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A3069C0)
#define LDNEIBBEOKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A306A90)

inline static constexpr unsigned int LDNEIBBEOKL_TypeDefinitionIndex = 46664;

class LDNEIBBEOKL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* OCMCAAPJGJP; // 0x18
	::UnityEngine::RectTransform* PHGJBAHONJJ; // 0x20
	::UnityEngine::RectTransform* FEAJEHJHLJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNEIBBEOKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDNEIBBEOKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDNEIBBEOKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
