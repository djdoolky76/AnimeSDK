#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define BCLPGKEDAAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D19ED0)
#define BCLPGKEDAAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D19D40)
#define BCLPGKEDAAK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D19EC0)

inline static constexpr unsigned int BCLPGKEDAAK_TypeDefinitionIndex = 41970;

class BCLPGKEDAAK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* BFOFMGBNIED; // 0x18
	::UnityEngine::Animation* BGAAIKGMOMO; // 0x20
	::UnityEngine::Transform* BDJJMBJJGGM; // 0x28
	::UnityEngine::Transform* HBLJHALIHBB; // 0x30
	::UnityEngine::Transform* BKDGGCFMIPD; // 0x38
	::UnityEngine::Transform* PDIAGGCOGEM; // 0x40
	::UnityEngine::Transform* EHEHMOEKLJI; // 0x48
	::UnityEngine::Transform* JFMOFNFHIKA; // 0x50
	::UnityEngine::Transform* OBNHHHHIPOL; // 0x58
	::UnityEngine::Transform* ODJBDGFKKNO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLPGKEDAAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCLPGKEDAAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCLPGKEDAAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
