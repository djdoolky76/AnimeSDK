#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define JJCFGFANEFB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13848270)
#define JJCFGFANEFB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13848190)
#define JJCFGFANEFB__CTOR_OFFSET UNITYSDK_OFFSET(0x13848260)

inline static constexpr unsigned int JJCFGFANEFB_TypeDefinitionIndex = 78753;

class JJCFGFANEFB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::SkinnedMeshRenderer* CKGLOOPIALJ; // 0x18
	::UnityEngine::Animator* LKKIPKAANKL; // 0x20
	::UnityEngine::SkinnedMeshRenderer* KMHDODKLAGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCFGFANEFB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJCFGFANEFB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJCFGFANEFB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
