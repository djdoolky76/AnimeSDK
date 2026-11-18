#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MHADIKAHMFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DE4D60)
#define MHADIKAHMFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DE4C60)
#define MHADIKAHMFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DE4A20)
#define MHADIKAHMFH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE4D50)

inline static constexpr unsigned int MHADIKAHMFH_TypeDefinitionIndex = 89631;

class MHADIKAHMFH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* LBAPCNNGOIJ; // 0x20
	::FGCOIBFFCHB* ELBOLGJMGEF; // 0x28
	::LGINJIKKBJA* JEJJONGBOFJ; // 0x30
	::UnityEngine::Transform* GBLKNGINJMA; // 0x38
	::FGCOIBFFCHB* BOFBLBAFBBK; // 0x40
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHADIKAHMFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHADIKAHMFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHADIKAHMFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHADIKAHMFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
