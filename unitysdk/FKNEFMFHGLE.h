#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FKNEFMFHGLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116BA240)
#define FKNEFMFHGLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116BA100)
#define FKNEFMFHGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x116BA230)

inline static constexpr unsigned int FKNEFMFHGLE_TypeDefinitionIndex = 79453;

class FKNEFMFHGLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HKEOAPODEHP; // 0x18
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JJBHMMEMIGI; // 0x28
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x30
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DONBHDPGDAJ; // 0x40
	::UnityEngine::Transform* AEGAPMOGAIO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEFMFHGLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKNEFMFHGLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKNEFMFHGLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
