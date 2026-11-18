#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define PGAOJKOJAIN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9D77D0)
#define PGAOJKOJAIN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9D7720)
#define PGAOJKOJAIN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9D7540)
#define PGAOJKOJAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D77C0)

inline static constexpr unsigned int PGAOJKOJAIN_TypeDefinitionIndex = 45248;

class PGAOJKOJAIN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KFKJHBMJHMA; // 0x18
	::UnityEngine::GameObject* AFLNMNLAFDH; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* PMDDCEJOAOP; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* MLGEMMDLCJP; // 0x30
	::UnityEngine::RectTransform* EJJFDHJJAHA; // 0x38
	::UnityEngine::RectTransform* HOGFNHGJMAH; // 0x40
	::UnityEngine::RectTransform* NIAHIGKOMEJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAOJKOJAIN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGAOJKOJAIN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAOJKOJAIN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGAOJKOJAIN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
