#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIAspectRatioHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define OJFEAMBDKKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE159560)
#define OJFEAMBDKKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1593B0)
#define OJFEAMBDKKO__CTOR_OFFSET UNITYSDK_OFFSET(0xE159550)

inline static constexpr unsigned int OJFEAMBDKKO_TypeDefinitionIndex = 55004;

class OJFEAMBDKKO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BPGIPBDNNEN; // 0x18
	::UnityEngine::Canvas* DMFEPOIHIDB; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::UnityEngine::RectTransform* GMMFIFKCIHC; // 0x30
	::MoleMole::UIAspectRatioHandler* EMINBFKOBOK; // 0x38
	::UnityEngine::RectTransform* ACJEMNKLFGK; // 0x40
	::UnityEngine::RectTransform* HHBEAMPPLFJ; // 0x48
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x50
	::UnityEngine::RectTransform* FAFNFNEBHIC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFEAMBDKKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJFEAMBDKKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJFEAMBDKKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
