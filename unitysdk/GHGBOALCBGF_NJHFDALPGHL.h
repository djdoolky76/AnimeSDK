#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABLevelPageController_Context; }

#define GHGBOALCBGF_NJHFDALPGHL_EIIOBEODDNC_OFFSET UNITYSDK_OFFSET(0x15CE7770)
#define GHGBOALCBGF_NJHFDALPGHL__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE7760)

inline static constexpr unsigned int GHGBOALCBGF_NJHFDALPGHL_TypeDefinitionIndex = 60516;

class GHGBOALCBGF_NJHFDALPGHL : public ::System::Object
{
public:
	::MoleMole::UIRABLevelPageController_Context* PJCLCLCNDCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF_NJHFDALPGHL__CTOR_OFFSET))(this);
	}

	::System::Void EIIOBEODDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF_NJHFDALPGHL_EIIOBEODDNC_OFFSET))(this);
	}
};
