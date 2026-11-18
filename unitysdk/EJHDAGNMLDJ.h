#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define EJHDAGNMLDJ_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x1354D1E0)
#define EJHDAGNMLDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1354D280)
#define EJHDAGNMLDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1354D110)
#define EJHDAGNMLDJ_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x1354D320)
#define EJHDAGNMLDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1354D270)

inline static constexpr unsigned int EJHDAGNMLDJ_TypeDefinitionIndex = 68290;

class EJHDAGNMLDJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MBKACMJJMBH; // 0x18
	::UnityEngine::RectTransform* NKKENFOHLNH; // 0x20
	::MoleMole::MonoGamepadSpaceList* MHAFFAEJCKG; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::GCIMMDDIFBJ* BHABPKLIAIH; // 0x38
	::UnityEngine::RectTransform* ADMHOOFAKAM; // 0x40
	::LGINJIKKBJA* DBGOKJNAIDH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAGNMLDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJHDAGNMLDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + EJHDAGNMLDJ_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJHDAGNMLDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + EJHDAGNMLDJ_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
