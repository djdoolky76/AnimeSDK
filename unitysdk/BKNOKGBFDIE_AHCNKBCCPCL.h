#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE;
namespace MoleMole { class MonoBuffIcon; }

#define BKNOKGBFDIE_AHCNKBCCPCL_MNLKIIKBNCI_OFFSET UNITYSDK_OFFSET(0x14EE3550)
#define BKNOKGBFDIE_AHCNKBCCPCL_OLNILPBBMMG_OFFSET UNITYSDK_OFFSET(0x14EE35D0)
#define BKNOKGBFDIE_AHCNKBCCPCL__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE3540)

inline static constexpr unsigned int BKNOKGBFDIE_AHCNKBCCPCL_TypeDefinitionIndex = 57142;

class BKNOKGBFDIE_AHCNKBCCPCL : public ::System::Object
{
public:
	::BKNOKGBFDIE* KLHPEBKNIFB; // 0x10
	::MoleMole::MonoBuffIcon* KENEEDAHMCI; // 0x18
	::System::Boolean EFGLMONALDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_AHCNKBCCPCL__CTOR_OFFSET))(this);
	}

	::System::Void MNLKIIKBNCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_AHCNKBCCPCL_MNLKIIKBNCI_OFFSET))(this);
	}

	::System::Void OLNILPBBMMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_AHCNKBCCPCL_OLNILPBBMMG_OFFSET))(this);
	}
};
