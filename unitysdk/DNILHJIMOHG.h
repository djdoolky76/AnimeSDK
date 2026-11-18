#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DNILHJIMOHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132A3D30)
#define DNILHJIMOHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132A3CA0)
#define DNILHJIMOHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132A3B30)
#define DNILHJIMOHG__CTOR_OFFSET UNITYSDK_OFFSET(0x132A3D20)

inline static constexpr unsigned int DNILHJIMOHG_TypeDefinitionIndex = 43292;

class DNILHJIMOHG : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNILHJIMOHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNILHJIMOHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNILHJIMOHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNILHJIMOHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
