#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFFFDDHPBJC;
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MFFFDDHPBJC_MGOCAAOIFNJ_OEPGIJABDEJ_OFFSET UNITYSDK_OFFSET(0x156A6340)
#define MFFFDDHPBJC_MGOCAAOIFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6330)

inline static constexpr unsigned int MFFFDDHPBJC_MGOCAAOIFNJ_TypeDefinitionIndex = 59580;

class MFFFDDHPBJC_MGOCAAOIFNJ : public ::System::Object
{
public:
	::MFFFDDHPBJC* KLHPEBKNIFB; // 0x10
	::UnityEngine::UI::Extension::UITabButton* BMBBLCBKBIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFDDHPBJC_MGOCAAOIFNJ__CTOR_OFFSET))(this);
	}

	::System::Void OEPGIJABDEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFDDHPBJC_MGOCAAOIFNJ_OEPGIJABDEJ_OFFSET))(this);
	}
};
