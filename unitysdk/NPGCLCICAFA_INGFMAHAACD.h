#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPGCLCICAFA;
namespace MoleMole { class UIZenkovSaleTipsDialogPopWindowController_Context; }

#define NPGCLCICAFA_INGFMAHAACD_MNLHLLEHBPF_OFFSET UNITYSDK_OFFSET(0x14F44C90)
#define NPGCLCICAFA_INGFMAHAACD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F44C80)

inline static constexpr unsigned int NPGCLCICAFA_INGFMAHAACD_TypeDefinitionIndex = 74604;

class NPGCLCICAFA_INGFMAHAACD : public ::System::Object
{
public:
	::NPGCLCICAFA* KLHPEBKNIFB; // 0x10
	::MoleMole::UIZenkovSaleTipsDialogPopWindowController_Context* HBMGHPEPBNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCLCICAFA_INGFMAHAACD__CTOR_OFFSET))(this);
	}

	::System::Void MNLHLLEHBPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCLCICAFA_INGFMAHAACD_MNLHLLEHBPF_OFFSET))(this);
	}
};
