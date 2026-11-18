#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MCOCCHFGNFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D505F0)
#define MCOCCHFGNFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D50510)
#define MCOCCHFGNFC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D505E0)

inline static constexpr unsigned int MCOCCHFGNFC_TypeDefinitionIndex = 39835;

class MCOCCHFGNFC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOCCHFGNFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCOCCHFGNFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCOCCHFGNFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
