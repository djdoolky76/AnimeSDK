#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define BNLPGMKOLIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128B5E40)
#define BNLPGMKOLIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128B5DA0)
#define BNLPGMKOLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x128B5E30)

inline static constexpr unsigned int BNLPGMKOLIP_TypeDefinitionIndex = 51620;

class BNLPGMKOLIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IOKMAADCDAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLPGMKOLIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNLPGMKOLIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNLPGMKOLIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
