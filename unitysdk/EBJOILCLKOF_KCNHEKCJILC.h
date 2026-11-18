#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

class MonoUITableScrollV2;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBJOILCLKOF_KCNHEKCJILC_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x7FE4FD0)
#define EBJOILCLKOF_KCNHEKCJILC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE5210)

inline static constexpr unsigned int EBJOILCLKOF_KCNHEKCJILC_TypeDefinitionIndex = 52362;

class EBJOILCLKOF_KCNHEKCJILC : public ::PIOMHDMPINF
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MLHNNMFACKL; // 0x10
	::MonoUITableScrollV2* FJBNGMADAEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF_KCNHEKCJILC__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF_KCNHEKCJILC_LBJEOHBBBPN_OFFSET))(this);
	}
};
