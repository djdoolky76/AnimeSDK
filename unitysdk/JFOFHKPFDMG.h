#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define JFOFHKPFDMG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C35E1D0)
#define JFOFHKPFDMG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C35E0B0)
#define JFOFHKPFDMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C35DEA0)
#define JFOFHKPFDMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35E1C0)

inline static constexpr unsigned int JFOFHKPFDMG_TypeDefinitionIndex = 50523;

class JFOFHKPFDMG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FICJLJEDNOI; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* LKJDKHCBIGO; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* ILKMKLCBGEN; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOFHKPFDMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFOFHKPFDMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOFHKPFDMG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFOFHKPFDMG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
