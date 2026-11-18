#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PEEEMFMLOAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17322AB0)
#define PEEEMFMLOAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17322950)
#define PEEEMFMLOAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x173226A0)
#define PEEEMFMLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17322AA0)

inline static constexpr unsigned int PEEEMFMLOAD_TypeDefinitionIndex = 85884;

class PEEEMFMLOAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ADLANOKDAEC; // 0x18
	::LGINJIKKBJA* CPGOJAFHDBL; // 0x20
	::UnityEngine::GameObject* IEHMHIDIOLJ; // 0x28
	::UnityEngine::GameObject* MJNMEGPGGAO; // 0x30
	::FGCOIBFFCHB* MFINGNPKDNI; // 0x38
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x40
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x48
	::UnityEngine::RectTransform* LEFIFIECICC; // 0x50
	::UnityEngine::GameObject* GIHELICMOCM; // 0x58
	::FGCOIBFFCHB* FDGGPGNKFOF; // 0x60
	::FGCOIBFFCHB* ALGAEKIHLND; // 0x68
	::FGCOIBFFCHB* EJJFDNIAEJP; // 0x70
	::UnityEngine::GameObject* LJANLPDGDLN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEMFMLOAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEEEMFMLOAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEEEMFMLOAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEMFMLOAD_KGEBDLGBGNM_OFFSET))(this);
	}
};
