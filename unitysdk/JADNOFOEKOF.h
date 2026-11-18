#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JADNOFOEKOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15C30B10)
#define JADNOFOEKOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15C30A40)
#define JADNOFOEKOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15C30890)
#define JADNOFOEKOF__CTOR_OFFSET UNITYSDK_OFFSET(0x15C30B00)

inline static constexpr unsigned int JADNOFOEKOF_TypeDefinitionIndex = 74426;

class JADNOFOEKOF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* OJPAODAIOFE; // 0x18
	::UnityEngine::Transform* OPBBBLFJDJJ; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::UnityEngine::Transform* KNLPBPPPHBE; // 0x30
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x38
	::UnityEngine::Transform* EIOBKKDBFFE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADNOFOEKOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JADNOFOEKOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADNOFOEKOF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JADNOFOEKOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
