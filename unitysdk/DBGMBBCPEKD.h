#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DBGMBBCPEKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E30430)
#define DBGMBBCPEKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E30370)
#define DBGMBBCPEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E30420)

inline static constexpr unsigned int DBGMBBCPEKD_TypeDefinitionIndex = 69027;

class DBGMBBCPEKD : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* HBOKMDPLMLH; // 0x18
	::UnityEngine::RectTransform* PJLLCFNNMBB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGMBBCPEKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBGMBBCPEKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBGMBBCPEKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
