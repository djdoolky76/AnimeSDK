#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoMaskSlider; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define HDJEPCDFGON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A042C0)
#define HDJEPCDFGON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A04180)
#define HDJEPCDFGON__CTOR_OFFSET UNITYSDK_OFFSET(0x14A042B0)

inline static constexpr unsigned int HDJEPCDFGON_TypeDefinitionIndex = 61697;

class HDJEPCDFGON : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* AOJIPMGGIKM; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::UnityEngine::UI::Text* JBOCIHEOOGM; // 0x28
	::UnityEngine::UI::Text* IIFNHLJOIKM; // 0x30
	::UnityEngine::UI::Text* KPIAADNHAMH; // 0x38
	::MoleMole::MonoMaskSlider* CDGKHJGADCE; // 0x40
	::UnityEngine::Animation* JGCLHCNHKJE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJEPCDFGON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJEPCDFGON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJEPCDFGON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
