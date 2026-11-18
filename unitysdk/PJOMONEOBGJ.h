#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class EJHDAGNMLDJ;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PJOMONEOBGJ_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x1C1D9100)
#define PJOMONEOBGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D9060)
#define PJOMONEOBGJ_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x1C1D8FB0)
#define PJOMONEOBGJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1C1D8EC0)
#define PJOMONEOBGJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D8E30)
#define PJOMONEOBGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D8C30)
#define PJOMONEOBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D8EB0)

inline static constexpr unsigned int PJOMONEOBGJ_TypeDefinitionIndex = 80432;

class PJOMONEOBGJ : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::RectTransform* ADMHOOFAKAM; // 0x18
	::UnityEngine::GameObject* MBKACMJJMBH; // 0x20
	::UnityEngine::RectTransform* NKKENFOHLNH; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* DBGOKJNAIDH; // 0x38
	::GCIMMDDIFBJ* BHABPKLIAIH; // 0x40
	::MoleMole::MonoGamepadSpaceList* MHAFFAEJCKG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOMONEOBGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::PJOMONEOBGJ* KDGMEFEJMGJ(::EJHDAGNMLDJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::PJOMONEOBGJ*(*)(::EJHDAGNMLDJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::EJHDAGNMLDJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::EJHDAGNMLDJ*))((::PBYTE)hIl2Cpp + PJOMONEOBGJ_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
