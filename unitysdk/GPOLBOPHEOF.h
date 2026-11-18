#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define GPOLBOPHEOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17ADEFA0)
#define GPOLBOPHEOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17ADEF00)
#define GPOLBOPHEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADEF90)

inline static constexpr unsigned int GPOLBOPHEOF_TypeDefinitionIndex = 61751;

class GPOLBOPHEOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* DLLENBILHLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOLBOPHEOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPOLBOPHEOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPOLBOPHEOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
