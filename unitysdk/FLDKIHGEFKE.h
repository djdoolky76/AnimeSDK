#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LOBGMFDLJPC.h"

namespace MoleMole { class CameraShotData; }
namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define FLDKIHGEFKE_FGMLBIDFLAA_OFFSET UNITYSDK_OFFSET(0x7A96E0)
#define FLDKIHGEFKE_KHJLNOFLJAE_OFFSET UNITYSDK_OFFSET(0x7A9710)

inline static constexpr unsigned int FLDKIHGEFKE_TypeDefinitionIndex = 62057;

struct alignas(8) FLDKIHGEFKE
{
	::System::Boolean BEMMPCAOFOK; // 0x10
	::System::Boolean JAOAIMCGDCK; // 0x11
	::System::Boolean AELLLKDMOFL; // 0x12
	::System::Boolean IDNIIMLIBGG; // 0x13
	::System::Byte _padding0[0x4];
	::MoleMole::UIPerformPageController* ACPICPLAAPB; // 0x18
	::System::Action* LGFHEHBBKKM; // 0x20

	::System::Boolean FGMLBIDFLAA(::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + FLDKIHGEFKE_FGMLBIDFLAA_OFFSET))(this, CNABFFJNFIE);
	}

	::LOBGMFDLJPC KHJLNOFLJAE(::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::LOBGMFDLJPC(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + FLDKIHGEFKE_KHJLNOFLJAE_OFFSET))(this, CNABFFJNFIE);
	}
};
