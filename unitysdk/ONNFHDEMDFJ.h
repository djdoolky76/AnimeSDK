#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class ScrollRect; }

#define ONNFHDEMDFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B49E50)
#define ONNFHDEMDFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B49D70)
#define ONNFHDEMDFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B49E40)

inline static constexpr unsigned int ONNFHDEMDFJ_TypeDefinitionIndex = 80682;

class ONNFHDEMDFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::ScrollRect* POMNAOPFPPB; // 0x18
	::UnityEngine::GameObject* FPLKDLOEDMF; // 0x20
	::UnityEngine::GameObject* AKAAMPLBJGJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNFHDEMDFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONNFHDEMDFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONNFHDEMDFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
