#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NAJJJJGEKGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12FCF610)
#define NAJJJJGEKGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12FCF580)
#define NAJJJJGEKGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12FCF350)
#define NAJJJJGEKGN__CTOR_OFFSET UNITYSDK_OFFSET(0x12FCF600)

inline static constexpr unsigned int NAJJJJGEKGN_TypeDefinitionIndex = 64807;

class NAJJJJGEKGN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::RectTransform* KOMIELKMHIC; // 0x20
	::UnityEngine::RectTransform* KDLNMKIAGAJ; // 0x28
	::UnityEngine::RectTransform* KOLCHGKNGFM; // 0x30
	::ADEJAGFCBHK* FAGMEMGEGFP; // 0x38
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x40
	::UnityEngine::Transform* HFHPOOMIBFN; // 0x48
	::UnityEngine::Transform* CIIPHGNBJJK; // 0x50
	::UnityEngine::RectTransform* OIOPLFJILDA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJJJJGEKGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAJJJJGEKGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAJJJJGEKGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJJJJGEKGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
