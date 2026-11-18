#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"

namespace System { class String; }

#define PIDMMLJALIG_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x150C9D50)
#define PIDMMLJALIG_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x150C9FB0)
#define PIDMMLJALIG_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x150CA0E0)
#define PIDMMLJALIG_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x150CA050)
#define PIDMMLJALIG_PEDDAEGGNGJ_OFFSET UNITYSDK_OFFSET(0x150C9DC0)
#define PIDMMLJALIG__CTOR_OFFSET UNITYSDK_OFFSET(0x150C9D40)

inline static constexpr unsigned int PIDMMLJALIG_TypeDefinitionIndex = 72940;

class PIDMMLJALIG : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::String* OINCIABOOLC; // 0x28
	::System::Boolean BNDKBFOAEEC; // 0x30

	::System::Void _ctor(::System::String* CPDGLJJGJDL, ::System::Boolean LCDBOOKMABF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIDMMLJALIG__CTOR_OFFSET))(this, CPDGLJJGJDL, LCDBOOKMABF);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDMMLJALIG_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDMMLJALIG_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Boolean PEDDAEGGNGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDMMLJALIG_PEDDAEGGNGJ_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDMMLJALIG_KJOHEMDIHNJ_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDMMLJALIG_JFNIMFIBFHA_OFFSET))(this);
	}
};
