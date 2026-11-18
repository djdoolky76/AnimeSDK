#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LBDEEJHBFNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129B4FB0)
#define LBDEEJHBFNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129B4E50)
#define LBDEEJHBFNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129B4C10)
#define LBDEEJHBFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x129B4FA0)

inline static constexpr unsigned int LBDEEJHBFNI_TypeDefinitionIndex = 65364;

class LBDEEJHBFNI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::UnityEngine::Animation* OMAPDGCDHNE; // 0x20
	::UnityEngine::Transform* DMGFOCJCPPM; // 0x28
	::UnityEngine::GameObject* BONMOLMDJPF; // 0x30
	::UnityEngine::GameObject* HIJDMOBEAEB; // 0x38
	::LGINJIKKBJA* GJLKPEACOBG; // 0x40
	::LGINJIKKBJA* PPKPOIOFFDG; // 0x48
	::LGINJIKKBJA* FJOMMLACDGD; // 0x50
	::LGINJIKKBJA* JCKGBDBOGDG; // 0x58
	::UnityEngine::GameObject* CGOOJEJHFIK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDEEJHBFNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBDEEJHBFNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBDEEJHBFNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDEEJHBFNI_KGEBDLGBGNM_OFFSET))(this);
	}
};
