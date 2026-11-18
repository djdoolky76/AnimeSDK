#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define DCDDHJDOMLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1205F4B0)
#define DCDDHJDOMLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1205F410)
#define DCDDHJDOMLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1205F4A0)

inline static constexpr unsigned int DCDDHJDOMLF_TypeDefinitionIndex = 47452;

class DCDDHJDOMLF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MBKACMJJMBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDDHJDOMLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCDDHJDOMLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCDDHJDOMLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
