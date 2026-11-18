#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FCOBPGEJDPJ_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x15E581C0)
#define FCOBPGEJDPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E582E0)
#define FCOBPGEJDPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E580F0)
#define FCOBPGEJDPJ_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x15E58240)
#define FCOBPGEJDPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15E58230)

inline static constexpr unsigned int FCOBPGEJDPJ_TypeDefinitionIndex = 64438;

class FCOBPGEJDPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DEMGHPAAOKC; // 0x20
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBPGEJDPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCOBPGEJDPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FCOBPGEJDPJ_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FCOBPGEJDPJ_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCOBPGEJDPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
