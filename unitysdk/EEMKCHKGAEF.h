#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EEMKCHKGAEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9C1000)
#define EEMKCHKGAEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9C0F20)
#define EEMKCHKGAEF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C0FF0)

inline static constexpr unsigned int EEMKCHKGAEF_TypeDefinitionIndex = 91579;

class EEMKCHKGAEF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x18
	::UnityEngine::Transform* EJHNNMBHAPK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMKCHKGAEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEMKCHKGAEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EEMKCHKGAEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
