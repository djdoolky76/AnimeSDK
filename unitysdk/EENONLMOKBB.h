#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define EENONLMOKBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A6EE80)
#define EENONLMOKBB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A6EDD0)
#define EENONLMOKBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A6EBD0)
#define EENONLMOKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6EE70)

inline static constexpr unsigned int EENONLMOKBB_TypeDefinitionIndex = 58165;

class EENONLMOKBB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* DLODKLHPFHB; // 0x18
	::LGINJIKKBJA* NPBAFDPGOFC; // 0x20
	::MonoUITableScrollV2* NICDFJIMCMI; // 0x28
	::UnityEngine::Transform* DAHMLEELPGA; // 0x30
	::UnityEngine::Transform* JAOEJEJLKDG; // 0x38
	::GCIMMDDIFBJ* AHEKHIJIOCG; // 0x40
	::LGINJIKKBJA* ANNDBKKJEPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENONLMOKBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENONLMOKBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENONLMOKBB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENONLMOKBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
