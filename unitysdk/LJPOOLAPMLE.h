#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LJPOOLAPMLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CF89F0)
#define LJPOOLAPMLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CF88D0)
#define LJPOOLAPMLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CF8650)
#define LJPOOLAPMLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF89E0)

inline static constexpr unsigned int LJPOOLAPMLE_TypeDefinitionIndex = 57713;

class LJPOOLAPMLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x18
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x30
	::UnityEngine::RectTransform* FHJNKEFNHOL; // 0x38
	::UnityEngine::RectTransform* CHCBMLIIJFJ; // 0x40
	::FGCOIBFFCHB* KEGPCGIAJAI; // 0x48
	::UnityEngine::RectTransform* GJFKDEHNOFK; // 0x50
	::UnityEngine::RectTransform* KLCJFCEJMNI; // 0x58
	::FGCOIBFFCHB* ADJELECBADK; // 0x60
	::FGCOIBFFCHB* NKCEEBJHHEG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPOOLAPMLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJPOOLAPMLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJPOOLAPMLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPOOLAPMLE_KGEBDLGBGNM_OFFSET))(this);
	}
};
