#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EGMIAPEDABH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148DEE70)
#define EGMIAPEDABH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148DED00)
#define EGMIAPEDABH__CTOR_OFFSET UNITYSDK_OFFSET(0x148DEE60)

inline static constexpr unsigned int EGMIAPEDABH_TypeDefinitionIndex = 70044;

class EGMIAPEDABH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IBAFPJAKPKD; // 0x18
	::GCIMMDDIFBJ* JGCLHCNHKJE; // 0x20
	::UnityEngine::RectTransform* AOLEKELNGEG; // 0x28
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x30
	::GCIMMDDIFBJ* MGKENAOIENI; // 0x38
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMIAPEDABH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMIAPEDABH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMIAPEDABH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
