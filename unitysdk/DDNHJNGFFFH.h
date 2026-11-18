#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define DDNHJNGFFFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15363E80)
#define DDNHJNGFFFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15363DB0)
#define DDNHJNGFFFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15363C30)
#define DDNHJNGFFFH__CTOR_OFFSET UNITYSDK_OFFSET(0x15363E70)

inline static constexpr unsigned int DDNHJNGFFFH_TypeDefinitionIndex = 38755;

class DDNHJNGFFFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x18
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::Transform* JAAHAKHMCKJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNHJNGFFFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDNHJNGFFFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNHJNGFFFH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDNHJNGFFFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
