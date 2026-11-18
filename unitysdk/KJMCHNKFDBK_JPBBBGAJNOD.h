#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define KJMCHNKFDBK_JPBBBGAJNOD_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16346300)
#define KJMCHNKFDBK_JPBBBGAJNOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16346230)
#define KJMCHNKFDBK_JPBBBGAJNOD__CTOR_OFFSET UNITYSDK_OFFSET(0x163464B0)

inline static constexpr unsigned int KJMCHNKFDBK_JPBBBGAJNOD_TypeDefinitionIndex = 70324;

class KJMCHNKFDBK_JPBBBGAJNOD : public ::MLJGPKJJPIL
{
public:
	::UnityEngine::GameObject* OGDEANNMACO; // 0x28
	::UnityEngine::GameObject* EGPGDICCFFB; // 0x30
	::UnityEngine::GameObject* DLCKINOFIKF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_JPBBBGAJNOD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_JPBBBGAJNOD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_JPBBBGAJNOD_EFKGNFCEENK_OFFSET))(this);
	}
};
