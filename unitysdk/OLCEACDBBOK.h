#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OLCEACDBBOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE15F5F0)
#define OLCEACDBBOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE15F560)
#define OLCEACDBBOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE15F350)
#define OLCEACDBBOK__CTOR_OFFSET UNITYSDK_OFFSET(0xE15F5E0)

inline static constexpr unsigned int OLCEACDBBOK_TypeDefinitionIndex = 70368;

class OLCEACDBBOK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x18
	::GCIMMDDIFBJ* LLDHMBJPFIB; // 0x20
	::GCIMMDDIFBJ* LGJPLFAKKPI; // 0x28
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x30
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x38
	::GCIMMDDIFBJ* KNEHCGPNIGP; // 0x40
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCEACDBBOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLCEACDBBOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLCEACDBBOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCEACDBBOK_KGEBDLGBGNM_OFFSET))(this);
	}
};
