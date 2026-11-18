#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define OCFANDPKAOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F66660)
#define OCFANDPKAOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F66580)
#define OCFANDPKAOO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F66650)

inline static constexpr unsigned int OCFANDPKAOO_TypeDefinitionIndex = 68714;

class OCFANDPKAOO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OADGFMJHHKC; // 0x18
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Text* FKIIMEJJPBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFANDPKAOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCFANDPKAOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCFANDPKAOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
