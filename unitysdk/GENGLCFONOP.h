#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class KNLFLMMHALL_1;

#define GENGLCFONOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11DA14B0)
#define GENGLCFONOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11DA1420)
#define GENGLCFONOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11DA12C0)
#define GENGLCFONOP__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA14A0)

inline static constexpr unsigned int GENGLCFONOP_TypeDefinitionIndex = 75054;

class GENGLCFONOP : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* PMDDCEJOAOP; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENGLCFONOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GENGLCFONOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENGLCFONOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GENGLCFONOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
