#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define LABGNABNBCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x126BF2C0)
#define LABGNABNBCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x126BF1F0)
#define LABGNABNBCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126BF0A0)
#define LABGNABNBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x126BF2B0)

inline static constexpr unsigned int LABGNABNBCA_TypeDefinitionIndex = 50870;

class LABGNABNBCA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABGNABNBCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LABGNABNBCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LABGNABNBCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABGNABNBCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
