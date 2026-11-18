#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define MBCDFPFPDNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E1C180)
#define MBCDFPFPDNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E1C090)
#define MBCDFPFPDNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E1BEE0)
#define MBCDFPFPDNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C170)

inline static constexpr unsigned int MBCDFPFPDNH_TypeDefinitionIndex = 68085;

class MBCDFPFPDNH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCDFPFPDNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBCDFPFPDNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBCDFPFPDNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCDFPFPDNH_KGEBDLGBGNM_OFFSET))(this);
	}
};
