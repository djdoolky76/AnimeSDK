#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define LOAFHGHDDAH_JLCIMIOGOKH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14037240)
#define LOAFHGHDDAH_JLCIMIOGOKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14037170)
#define LOAFHGHDDAH_JLCIMIOGOKH__CTOR_OFFSET UNITYSDK_OFFSET(0x140373F0)

inline static constexpr unsigned int LOAFHGHDDAH_JLCIMIOGOKH_TypeDefinitionIndex = 60748;

class LOAFHGHDDAH_JLCIMIOGOKH : public ::MLJGPKJJPIL
{
public:
	::UnityEngine::GameObject* OGDEANNMACO; // 0x28
	::UnityEngine::GameObject* DLCKINOFIKF; // 0x30
	::UnityEngine::GameObject* EGPGDICCFFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_JLCIMIOGOKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_JLCIMIOGOKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_JLCIMIOGOKH_EFKGNFCEENK_OFFSET))(this);
	}
};
