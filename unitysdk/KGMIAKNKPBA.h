#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;

#define KGMIAKNKPBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12999930)
#define KGMIAKNKPBA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129997A0)
#define KGMIAKNKPBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12999510)
#define KGMIAKNKPBA__CTOR_OFFSET UNITYSDK_OFFSET(0x12999920)

inline static constexpr unsigned int KGMIAKNKPBA_TypeDefinitionIndex = 76391;

class KGMIAKNKPBA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DBJCGFFGHFB; // 0x18
	::UnityEngine::Transform* CPEMGAGGEHP; // 0x20
	::LGINJIKKBJA* KOFDFMEEENM; // 0x28
	::LGINJIKKBJA* NMEBAHLIJGF; // 0x30
	::LGINJIKKBJA* MAHNABIKKDL; // 0x38
	::LGINJIKKBJA* BAPGIBLMHPJ; // 0x40
	::LGINJIKKBJA* LKJDKAGPEOL; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* BOGHCBIHHBF; // 0x50
	::LGINJIKKBJA* OMFDKIIPGHM; // 0x58
	::KNLFLMMHALL_1<::System::Object*>* PFNAFELKHHP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMIAKNKPBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMIAKNKPBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMIAKNKPBA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMIAKNKPBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
