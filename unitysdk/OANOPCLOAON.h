#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OANOPCLOAON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF16E200)
#define OANOPCLOAON_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF16E150)
#define OANOPCLOAON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF16DED0)
#define OANOPCLOAON__CTOR_OFFSET UNITYSDK_OFFSET(0xF16E1F0)

inline static constexpr unsigned int OANOPCLOAON_TypeDefinitionIndex = 50703;

class OANOPCLOAON : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x18
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x30
	::FGCOIBFFCHB* FCOCNDLFIKE; // 0x38
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JMBKMPCHAND; // 0x50
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x68
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANOPCLOAON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OANOPCLOAON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANOPCLOAON_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OANOPCLOAON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
