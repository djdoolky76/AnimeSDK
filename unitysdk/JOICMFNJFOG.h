#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define JOICMFNJFOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155CDB20)
#define JOICMFNJFOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155CD9E0)
#define JOICMFNJFOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155CD810)
#define JOICMFNJFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x155CDB10)

inline static constexpr unsigned int JOICMFNJFOG_TypeDefinitionIndex = 76658;

class JOICMFNJFOG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KGPBAPEINKN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x30
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x38
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOICMFNJFOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOICMFNJFOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOICMFNJFOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOICMFNJFOG_KGEBDLGBGNM_OFFSET))(this);
	}
};
