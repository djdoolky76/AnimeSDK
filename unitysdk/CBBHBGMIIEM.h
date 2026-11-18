#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define CBBHBGMIIEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C75A30)
#define CBBHBGMIIEM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14C75980)
#define CBBHBGMIIEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C757B0)
#define CBBHBGMIIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C75A20)

inline static constexpr unsigned int CBBHBGMIIEM_TypeDefinitionIndex = 80720;

class CBBHBGMIIEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIImgText* BJBGIMJKCDA; // 0x18
	::MonoUITableScrollV2* MCPLCIHDAPH; // 0x20
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Text* KONPMOGCPID; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::MonoUITableScrollV2* FHIGAJCDDMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBHBGMIIEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBBHBGMIIEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBHBGMIIEM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBBHBGMIIEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
