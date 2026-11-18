#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BFCOCMNJIFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128A4A00)
#define BFCOCMNJIFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128A4960)
#define BFCOCMNJIFA__CTOR_OFFSET UNITYSDK_OFFSET(0x128A49F0)

inline static constexpr unsigned int BFCOCMNJIFA_TypeDefinitionIndex = 88385;

class BFCOCMNJIFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IPOLLNPLEPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOCMNJIFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFCOCMNJIFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFCOCMNJIFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
