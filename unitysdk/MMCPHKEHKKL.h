#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define MMCPHKEHKKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177CC8D0)
#define MMCPHKEHKKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177CC800)
#define MMCPHKEHKKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177CC650)
#define MMCPHKEHKKL__CTOR_OFFSET UNITYSDK_OFFSET(0x177CC8C0)

inline static constexpr unsigned int MMCPHKEHKKL_TypeDefinitionIndex = 90196;

class MMCPHKEHKKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* BOOKCAHAJGO; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* PDNIIOFPPKD; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* PCKCFAMFLFI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCPHKEHKKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMCPHKEHKKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCPHKEHKKL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMCPHKEHKKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
