#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define LCKJIOACPJO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2ED020)
#define LCKJIOACPJO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2ECE80)
#define LCKJIOACPJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED010)

inline static constexpr unsigned int LCKJIOACPJO_TypeDefinitionIndex = 89277;

class LCKJIOACPJO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x18
	::UnityEngine::UI::Text* DGJNCIFBOJN; // 0x20
	::UnityEngine::GameObject* BDDBGMEHHLE; // 0x28
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* BIOGEIHKABE; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x38
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x40
	::UnityEngine::Animation* HGEBLKNDDPG; // 0x48
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x50
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x58
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x60
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKJIOACPJO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCKJIOACPJO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCKJIOACPJO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
