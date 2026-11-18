#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PGLAEEPKHDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178C91C0)
#define PGLAEEPKHDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178C9060)
#define PGLAEEPKHDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178C8E20)
#define PGLAEEPKHDM__CTOR_OFFSET UNITYSDK_OFFSET(0x178C91B0)

inline static constexpr unsigned int PGLAEEPKHDM_TypeDefinitionIndex = 76538;

class PGLAEEPKHDM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EKGEIPPHICF; // 0x18
	::FGCOIBFFCHB* KOJHMFIFJGB; // 0x20
	::GCIMMDDIFBJ* HELAMPHDBEH; // 0x28
	::UnityEngine::RectTransform* PGDICOEIGPO; // 0x30
	::FGCOIBFFCHB* PCAMNOEFMDP; // 0x38
	::FGCOIBFFCHB* AIIBFBKDLJP; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::UnityEngine::RectTransform* NHJPFIECDMM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLAEEPKHDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGLAEEPKHDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLAEEPKHDM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGLAEEPKHDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
