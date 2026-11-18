#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EOGJIHHINFB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14184270)
#define EOGJIHHINFB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14184100)
#define EOGJIHHINFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14184260)

inline static constexpr unsigned int EOGJIHHINFB_TypeDefinitionIndex = 72190;

class EOGJIHHINFB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HFIOFHJMGLN; // 0x18
	::UnityEngine::GameObject* HLOOAFBGOJK; // 0x20
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x28
	::UnityEngine::GameObject* PCIJNOCKMFF; // 0x30
	::UnityEngine::Transform* HEMCKHKBGJE; // 0x38
	::UnityEngine::Transform* CECEJIGEOBM; // 0x40
	::UnityEngine::GameObject* KEHPAOOHNOI; // 0x48
	::UnityEngine::GameObject* HGGDEMOPPNK; // 0x50
	::UnityEngine::GameObject* NGKPHLJCIBF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGJIHHINFB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOGJIHHINFB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOGJIHHINFB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
