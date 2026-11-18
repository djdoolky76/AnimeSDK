#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BPJHDEGGDJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F0A940)
#define BPJHDEGGDJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F0A8A0)
#define BPJHDEGGDJH__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0A930)

inline static constexpr unsigned int BPJHDEGGDJH_TypeDefinitionIndex = 54669;

class BPJHDEGGDJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJHDEGGDJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPJHDEGGDJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPJHDEGGDJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
