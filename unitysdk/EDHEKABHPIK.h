#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define EDHEKABHPIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141473B0)
#define EDHEKABHPIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14147280)
#define EDHEKABHPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x141473A0)

inline static constexpr unsigned int EDHEKABHPIK_TypeDefinitionIndex = 47467;

class EDHEKABHPIK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBHMAPJCFAD; // 0x18
	::UnityEngine::RectTransform* CHFNEOPMACJ; // 0x20
	::UnityEngine::CanvasGroup* AOPBIMMBAGM; // 0x28
	::UnityEngine::RectTransform* FMMGFCOEMDE; // 0x30
	::UnityEngine::RectTransform* EOOLDPNJKFA; // 0x38
	::UnityEngine::GameObject* BAKPJHDLHBB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHEKABHPIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDHEKABHPIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDHEKABHPIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
