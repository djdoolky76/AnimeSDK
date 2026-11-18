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

#define IMOEDABPFCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1658A060)
#define IMOEDABPFCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16589EB0)
#define IMOEDABPFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1658A050)

inline static constexpr unsigned int IMOEDABPFCG_TypeDefinitionIndex = 74522;

class IMOEDABPFCG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JMBKMPCHAND; // 0x30
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x38
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x40
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x48
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x50
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOEDABPFCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMOEDABPFCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMOEDABPFCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
