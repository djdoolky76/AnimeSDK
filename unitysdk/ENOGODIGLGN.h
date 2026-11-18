#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define ENOGODIGLGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3A3E0)
#define ENOGODIGLGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E3A2D0)
#define ENOGODIGLGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3A100)
#define ENOGODIGLGN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3A3D0)

inline static constexpr unsigned int ENOGODIGLGN_TypeDefinitionIndex = 41817;

class ENOGODIGLGN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x18
	::UnityEngine::Transform* IODBDPOLPKA; // 0x20
	::FGCOIBFFCHB* CBLOOBFCBJP; // 0x28
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x30
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGODIGLGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENOGODIGLGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENOGODIGLGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGODIGLGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
