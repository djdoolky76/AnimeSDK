#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NLEJNCDEEPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EB4A0D0)
#define NLEJNCDEEPC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EB49FC0)
#define NLEJNCDEEPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB49D30)
#define NLEJNCDEEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A0C0)

inline static constexpr unsigned int NLEJNCDEEPC_TypeDefinitionIndex = 96383;

class NLEJNCDEEPC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CODNCGFPAEJ; // 0x18
	::UnityEngine::Animation* KOCAHFMIGDO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IAPHAMFGIDG; // 0x28
	::UnityEngine::GameObject* LGNFNMAOHPP; // 0x30
	::LGINJIKKBJA* DDNEPKHAFPH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* INOBADHCNOI; // 0x40
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x48
	::FGCOIBFFCHB* GAGDGKOAOLN; // 0x50
	::UnityEngine::Transform* FICJEBHPMJB; // 0x58
	::UnityEngine::Transform* FJGPOOLCOEP; // 0x60
	::UnityEngine::GameObject* CLMDCJDHDKH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* MAMONMAINNA; // 0x70
	::UnityEngine::Transform* BCOKNPGBBEA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEJNCDEEPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLEJNCDEEPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEJNCDEEPC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLEJNCDEEPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
