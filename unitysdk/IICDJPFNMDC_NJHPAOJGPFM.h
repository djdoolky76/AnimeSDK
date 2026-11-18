#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define IICDJPFNMDC_NJHPAOJGPFM_JKNEELDIDPK_OFFSET UNITYSDK_OFFSET(0x160AA4B0)
#define IICDJPFNMDC_NJHPAOJGPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x160AA4A0)

inline static constexpr unsigned int IICDJPFNMDC_NJHPAOJGPFM_TypeDefinitionIndex = 92150;

class IICDJPFNMDC_NJHPAOJGPFM : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_NJHPAOJGPFM__CTOR_OFFSET))(this);
	}

	::System::Boolean JKNEELDIDPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_NJHPAOJGPFM_JKNEELDIDPK_OFFSET))(this);
	}
};
