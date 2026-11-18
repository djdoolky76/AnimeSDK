#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class KNLFLMMHALL_1;

#define FOAIODPANCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13234700)
#define FOAIODPANCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13234670)
#define FOAIODPANCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13234510)
#define FOAIODPANCM__CTOR_OFFSET UNITYSDK_OFFSET(0x132346F0)

inline static constexpr unsigned int FOAIODPANCM_TypeDefinitionIndex = 65776;

class FOAIODPANCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* PMDDCEJOAOP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAIODPANCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOAIODPANCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAIODPANCM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOAIODPANCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
