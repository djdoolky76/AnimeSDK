#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define JFFCKDCBAEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18733B30)
#define JFFCKDCBAEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18733A70)
#define JFFCKDCBAEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18733B20)

inline static constexpr unsigned int JFFCKDCBAEM_TypeDefinitionIndex = 58017;

class JFFCKDCBAEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFCKDCBAEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFFCKDCBAEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFFCKDCBAEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
