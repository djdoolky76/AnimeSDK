#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/PHPKKAKAJNJ_GNIHOHAABAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define PHPKKAKAJNJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1C2A7A70)
#define PHPKKAKAJNJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C2A79E0)
#define PHPKKAKAJNJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C2A7950)
#define PHPKKAKAJNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A78D0)
#define PHPKKAKAJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7940)

inline static constexpr unsigned int PHPKKAKAJNJ_TypeDefinitionIndex = 76655;

class PHPKKAKAJNJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE9; // 0x0
	::System::String* EBLELEIODJH; // 0x20
	::UnityEngine::Vector3 IPPPDGCDLKG; // 0x28
	::PHPKKAKAJNJ_GNIHOHAABAF HGKCKNAKOBL; // 0x34
	::System::Single GLPFNIECPID; // 0x38
	::System::Int32 JBCNPOHMGPE; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPKKAKAJNJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKKAKAJNJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKKAKAJNJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKKAKAJNJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::PHPKKAKAJNJ_GNIHOHAABAF IMLLDOHDCNC, ::System::String* KONLCHODAHB, ::System::Int32 DAAEHEHLLLD, ::UnityEngine::Vector3 JNDDJMAHNAI, ::System::Single MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::PHPKKAKAJNJ_GNIHOHAABAF, ::System::String*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PHPKKAKAJNJ_CNHBDOMKKDE_OFFSET))(this, IMLLDOHDCNC, KONLCHODAHB, DAAEHEHLLLD, JNDDJMAHNAI, MKBCMHIAMHF);
	}
};
