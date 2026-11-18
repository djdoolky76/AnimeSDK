#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CABHPHOJEBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159A6540)
#define CABHPHOJEBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159A6480)
#define CABHPHOJEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x159A6530)

inline static constexpr unsigned int CABHPHOJEBE_TypeDefinitionIndex = 76130;

class CABHPHOJEBE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* COPKFNAFGME; // 0x18
	::UnityEngine::RectTransform* KCLDLDIJCFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABHPHOJEBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CABHPHOJEBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CABHPHOJEBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
