#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define MMEMOPLLEBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D8F6F0)
#define MMEMOPLLEBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D8F5E0)
#define MMEMOPLLEBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8F6E0)

inline static constexpr unsigned int MMEMOPLLEBI_TypeDefinitionIndex = 88102;

class MMEMOPLLEBI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LJABMBKPOJF; // 0x18
	::UnityEngine::UI::Extension::UIImgText* CFEMMLDECOJ; // 0x20
	::MoleMole::MonoGamepadRegion* GNOJGANMLCF; // 0x28
	::MonoUITableScrollV2* GPIAMKAJBFA; // 0x30
	::UnityEngine::UI::Extension::UIImgText* AKAAONGHLCA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEMOPLLEBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMEMOPLLEBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMEMOPLLEBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
