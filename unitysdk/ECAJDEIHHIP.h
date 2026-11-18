#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ECAJDEIHHIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDD3330)
#define ECAJDEIHHIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFDD3230)
#define ECAJDEIHHIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDD3020)
#define ECAJDEIHHIP__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD3320)

inline static constexpr unsigned int ECAJDEIHHIP_TypeDefinitionIndex = 55601;

class ECAJDEIHHIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::FGCOIBFFCHB* DDJAJDBHKNM; // 0x40
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAJDEIHHIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECAJDEIHHIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECAJDEIHHIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAJDEIHHIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
