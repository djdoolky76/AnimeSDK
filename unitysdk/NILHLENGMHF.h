#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define NILHLENGMHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE582A80)
#define NILHLENGMHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE5829B0)
#define NILHLENGMHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE582810)
#define NILHLENGMHF__CTOR_OFFSET UNITYSDK_OFFSET(0xE582A70)

inline static constexpr unsigned int NILHLENGMHF_TypeDefinitionIndex = 77868;

class NILHLENGMHF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FIBGPLOMAGI; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x28
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x30
	::UnityEngine::Transform* GMAHBLJCENC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHLENGMHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NILHLENGMHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHLENGMHF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NILHLENGMHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
