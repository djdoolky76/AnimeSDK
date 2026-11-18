#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define FNNKGPCGGCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179BE4F0)
#define FNNKGPCGGCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179BE3E0)
#define FNNKGPCGGCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179BDFA0)
#define FNNKGPCGGCK_PLIIGGDBHCG_OFFSET UNITYSDK_OFFSET(0x179BE1F0)
#define FNNKGPCGGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x179BE4E0)

inline static constexpr unsigned int FNNKGPCGGCK_TypeDefinitionIndex = 47232;

class FNNKGPCGGCK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FAJIOEFLDKM; // 0x18
	::UnityEngine::RectTransform* AFIKJAIPLNG; // 0x20
	::UnityEngine::RectTransform* MPEEBHPDOML; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDACHPLBKIE; // 0x30
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::MoleMole::MonoGamepadModule* LMDABOICMHA; // 0x48
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x50
	::MoleMole::MonoGamepadModule* ALHNIGGMPPJ; // 0x58
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x60
	::LGINJIKKBJA* DAFOMFCLPJP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNKGPCGGCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNNKGPCGGCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PLIIGGDBHCG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNNKGPCGGCK_PLIIGGDBHCG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNKGPCGGCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNNKGPCGGCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
