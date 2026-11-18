#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define EPCOCNOCHEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169B3150)
#define EPCOCNOCHEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169B3050)
#define EPCOCNOCHEG__CTOR_OFFSET UNITYSDK_OFFSET(0x169B3140)

inline static constexpr unsigned int EPCOCNOCHEG_TypeDefinitionIndex = 60799;

class EPCOCNOCHEG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OEAJPPOPIOJ; // 0x18
	::UnityEngine::Transform* PILBNBMDNMD; // 0x20
	::UnityEngine::Transform* NIEHMPBEHPL; // 0x28
	::UnityEngine::Transform* BKJHCPHKHIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCOCNOCHEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPCOCNOCHEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPCOCNOCHEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
