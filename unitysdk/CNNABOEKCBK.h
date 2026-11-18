#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CNNABOEKCBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193EA1E0)
#define CNNABOEKCBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193EA0E0)
#define CNNABOEKCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x193EA1D0)

inline static constexpr unsigned int CNNABOEKCBK_TypeDefinitionIndex = 54294;

class CNNABOEKCBK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AMDDAMFPOKG; // 0x18
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0x20
	::MoleMole::MonoGamepadCustomList* OCMCAAPJGJP; // 0x28
	::UnityEngine::RectTransform* OGEKOCKIFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNABOEKCBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNNABOEKCBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNNABOEKCBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
