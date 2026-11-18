#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define HPKBILEELKA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1819C040)
#define HPKBILEELKA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1819BEE0)
#define HPKBILEELKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1819C030)

inline static constexpr unsigned int HPKBILEELKA_TypeDefinitionIndex = 81306;

class HPKBILEELKA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LDNHCLCNEPJ; // 0x18
	::UnityEngine::RectTransform* OPIEEKGCNPH; // 0x20
	::UnityEngine::GameObject* CJNLKNOBKGD; // 0x28
	::UnityEngine::GameObject* DAKGBBNDLKL; // 0x30
	::UnityEngine::GameObject* DBHEECPMCPE; // 0x38
	::UnityEngine::UI::VerticalLayoutGroup* JNBLKCKPMDD; // 0x40
	::UnityEngine::UI::GridLayoutGroup* PJNHMLLIAGJ; // 0x48
	::MonoUITableScrollV2* CJJOBNGGGDP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKBILEELKA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPKBILEELKA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPKBILEELKA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
