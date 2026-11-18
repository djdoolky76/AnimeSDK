#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HILPJDNDIME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D301A0)
#define HILPJDNDIME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D300E0)
#define HILPJDNDIME__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30190)

inline static constexpr unsigned int HILPJDNDIME_TypeDefinitionIndex = 70465;

class HILPJDNDIME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IOOAOPAFJNP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* CICOJBABMAM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILPJDNDIME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HILPJDNDIME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HILPJDNDIME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
