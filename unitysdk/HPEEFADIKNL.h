#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define HPEEFADIKNL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEA09470)
#define HPEEFADIKNL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEA09390)
#define HPEEFADIKNL__CTOR_OFFSET UNITYSDK_OFFSET(0xEA09460)

inline static constexpr unsigned int HPEEFADIKNL_TypeDefinitionIndex = 73923;

class HPEEFADIKNL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* KDADINNPFAK; // 0x18
	::UnityEngine::UI::Text* BEGCOICMFFI; // 0x20
	::UnityEngine::Transform* OADGFMJHHKC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEEFADIKNL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPEEFADIKNL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPEEFADIKNL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
