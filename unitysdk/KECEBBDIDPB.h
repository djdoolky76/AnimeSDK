#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define KECEBBDIDPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1860B7C0)
#define KECEBBDIDPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1860B710)
#define KECEBBDIDPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1860B510)
#define KECEBBDIDPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1860B7B0)

inline static constexpr unsigned int KECEBBDIDPB_TypeDefinitionIndex = 92021;

class KECEBBDIDPB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* IOIBEDADICL; // 0x18
	::UnityEngine::RectTransform* DANFDNDOLKB; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* KGJLPLDFEJN; // 0x28
	::UnityEngine::GameObject* CKAJAOLANJP; // 0x30
	::UnityEngine::RectTransform* CDMLNJAMGKA; // 0x38
	::UnityEngine::RectTransform* NEJMCGCDLFO; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* NEGMGEDOIJC; // 0x48
	::UnityEngine::RectTransform* IFLIEEILJLA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECEBBDIDPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KECEBBDIDPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KECEBBDIDPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECEBBDIDPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
