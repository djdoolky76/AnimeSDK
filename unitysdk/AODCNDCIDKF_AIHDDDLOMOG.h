#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define AODCNDCIDKF_AIHDDDLOMOG_GDMNLLHBIDD_OFFSET UNITYSDK_OFFSET(0x113C3D60)
#define AODCNDCIDKF_AIHDDDLOMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3D50)

inline static constexpr unsigned int AODCNDCIDKF_AIHDDDLOMOG_TypeDefinitionIndex = 79614;

class AODCNDCIDKF_AIHDDDLOMOG : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_AIHDDDLOMOG__CTOR_OFFSET))(this);
	}

	::System::Void GDMNLLHBIDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_AIHDDDLOMOG_GDMNLLHBIDD_OFFSET))(this);
	}
};
