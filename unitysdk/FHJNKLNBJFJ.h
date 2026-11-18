#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define FHJNKLNBJFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EB4660)
#define FHJNKLNBJFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EB45B0)
#define FHJNKLNBJFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EB43D0)
#define FHJNKLNBJFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB4650)

inline static constexpr unsigned int FHJNKLNBJFJ_TypeDefinitionIndex = 52424;

class FHJNKLNBJFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LCBOCDCLNKF; // 0x18
	::MoleMole::MonoGamepadSpaceList* NOBFKMJPJGP; // 0x20
	::UnityEngine::GameObject* EHGGKEFCICL; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* FMBPLOLPDOJ; // 0x30
	::UnityEngine::GameObject* OGCCDGPFMBM; // 0x38
	::LGINJIKKBJA* DKLILGPAALJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJNKLNBJFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHJNKLNBJFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJNKLNBJFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHJNKLNBJFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
