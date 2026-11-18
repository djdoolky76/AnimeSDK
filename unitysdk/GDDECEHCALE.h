#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GDDECEHCALE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CD2E50)
#define GDDECEHCALE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CD2CA0)
#define GDDECEHCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2E40)

inline static constexpr unsigned int GDDECEHCALE_TypeDefinitionIndex = 84928;

class GDDECEHCALE : public ::GIBMJLOJLKD
{
public:
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x18
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JMBKMPCHAND; // 0x28
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x30
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x38
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x48
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x50
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDECEHCALE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDDECEHCALE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDDECEHCALE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
