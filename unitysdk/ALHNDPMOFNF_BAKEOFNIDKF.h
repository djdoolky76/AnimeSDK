#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ALHNDPMOFNF_BAKEOFNIDKF_MAKMGLFHJMN_OFFSET UNITYSDK_OFFSET(0x11BB0250)
#define ALHNDPMOFNF_BAKEOFNIDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB0240)

inline static constexpr unsigned int ALHNDPMOFNF_BAKEOFNIDKF_TypeDefinitionIndex = 86722;

class ALHNDPMOFNF_BAKEOFNIDKF : public ::System::Object
{
public:
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* MLMCJMFDIBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_BAKEOFNIDKF__CTOR_OFFSET))(this);
	}

	::System::Void MAKMGLFHJMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_BAKEOFNIDKF_MAKMGLFHJMN_OFFSET))(this);
	}
};
