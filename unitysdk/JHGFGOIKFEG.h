#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define JHGFGOIKFEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x198C90D0)
#define JHGFGOIKFEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x198C9020)
#define JHGFGOIKFEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x198C8E60)
#define JHGFGOIKFEG__CTOR_OFFSET UNITYSDK_OFFSET(0x198C90C0)

inline static constexpr unsigned int JHGFGOIKFEG_TypeDefinitionIndex = 54624;

class JHGFGOIKFEG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NIBIKDMMOKP; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* OLONKABPOIB; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* MICIFODNFEN; // 0x28
	::UnityEngine::Canvas* NKGJGOIKICF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGFGOIKFEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGFGOIKFEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGFGOIKFEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGFGOIKFEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
