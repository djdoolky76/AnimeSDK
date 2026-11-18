#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PBAJALGCKAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7E2900)
#define PBAJALGCKAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7E2840)
#define PBAJALGCKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E28F0)

inline static constexpr unsigned int PBAJALGCKAE_TypeDefinitionIndex = 67206;

class PBAJALGCKAE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x18
	::MonoUITableScrollV2* ICKJBLKDIOP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAJALGCKAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBAJALGCKAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBAJALGCKAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
