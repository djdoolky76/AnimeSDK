#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EADNJEGGDAO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9AF1E0)
#define EADNJEGGDAO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9AF110)
#define EADNJEGGDAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9AEFC0)
#define EADNJEGGDAO__CTOR_OFFSET UNITYSDK_OFFSET(0xF9AF1D0)

inline static constexpr unsigned int EADNJEGGDAO_TypeDefinitionIndex = 92298;

class EADNJEGGDAO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADNJEGGDAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EADNJEGGDAO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EADNJEGGDAO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADNJEGGDAO_KGEBDLGBGNM_OFFSET))(this);
	}
};
