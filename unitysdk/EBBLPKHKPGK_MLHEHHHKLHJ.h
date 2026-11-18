#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBBLPKHKPGK;
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EBBLPKHKPGK_MLHEHHHKLHJ_OEPGIJABDEJ_OFFSET UNITYSDK_OFFSET(0x16BCDE80)
#define EBBLPKHKPGK_MLHEHHHKLHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCDE70)

inline static constexpr unsigned int EBBLPKHKPGK_MLHEHHHKLHJ_TypeDefinitionIndex = 54794;

class EBBLPKHKPGK_MLHEHHHKLHJ : public ::System::Object
{
public:
	::EBBLPKHKPGK* KLHPEBKNIFB; // 0x10
	::UnityEngine::UI::Extension::UITabButton* BMBBLCBKBIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_MLHEHHHKLHJ__CTOR_OFFSET))(this);
	}

	::System::Void OEPGIJABDEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_MLHEHHHKLHJ_OEPGIJABDEJ_OFFSET))(this);
	}
};
