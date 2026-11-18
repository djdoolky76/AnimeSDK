#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCALMEHPGIK.h"
#include "unitysdk/JMLFHNIBMJO.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAKHJNIMJIL;

#define NGNIOLAEBEB_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x131471D0)
#define NGNIOLAEBEB_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x13147220)
#define NGNIOLAEBEB__CTOR_OFFSET UNITYSDK_OFFSET(0x131471E0)

inline static constexpr unsigned int NGNIOLAEBEB_TypeDefinitionIndex = 87629;

class NGNIOLAEBEB : public ::JMLFHNIBMJO
{
public:
	::UnityEngine::Vector3 OLLFNNGJCFN; // 0x10
	::UnityEngine::Vector3 AEOKBAOODKG; // 0x1C
	::UnityEngine::Vector3 HAKHEBMLCLI; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGNIOLAEBEB__CTOR_OFFSET))(this, OHOGDOMNHNK, CFJFMMGPGKE, KBHFBLJPFJH);
	}

	::CCALMEHPGIK BKNKCFDBLGH()
	{
		return ((::CCALMEHPGIK(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNIOLAEBEB_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + NGNIOLAEBEB_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
