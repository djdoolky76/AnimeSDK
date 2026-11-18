#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class KNLFLMMHALL_1;

#define AFHLFLAAGOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154EF320)
#define AFHLFLAAGOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154EF250)
#define AFHLFLAAGOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154EF050)
#define AFHLFLAAGOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x154EF310)

inline static constexpr unsigned int AFHLFLAAGOJ_TypeDefinitionIndex = 71623;

class AFHLFLAAGOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MAMNIGKOFLN; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* PNPJPEJKANA; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* AJIBHBJNOCE; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLFLAAGOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFHLFLAAGOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFHLFLAAGOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHLFLAAGOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
