#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI { class LayoutElement; }
template <typename T> class KNLFLMMHALL_1;

#define LGMAIMOJNLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x184F3AF0)
#define LGMAIMOJNLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184F39E0)
#define LGMAIMOJNLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x184F3800)
#define LGMAIMOJNLD__CTOR_OFFSET UNITYSDK_OFFSET(0x184F3AE0)

inline static constexpr unsigned int LGMAIMOJNLD_TypeDefinitionIndex = 49667;

class LGMAIMOJNLD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::LayoutElement* GKCBJIHEMCF; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* LALMOHNEFCM; // 0x20
	::FGCOIBFFCHB* HGMNLNMGBBG; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMAIMOJNLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGMAIMOJNLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMAIMOJNLD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGMAIMOJNLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
