#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJDAIKKIJCI;
namespace System { class Action; }

#define KJDAIKKIJCI_DMHLPGEJNMG_IJEDCDKOBOG_OFFSET UNITYSDK_OFFSET(0x15213840)
#define KJDAIKKIJCI_DMHLPGEJNMG_LOPIPAPDFOG_OFFSET UNITYSDK_OFFSET(0x15213820)
#define KJDAIKKIJCI_DMHLPGEJNMG__CTOR_OFFSET UNITYSDK_OFFSET(0x15213810)

inline static constexpr unsigned int KJDAIKKIJCI_DMHLPGEJNMG_TypeDefinitionIndex = 85205;

class KJDAIKKIJCI_DMHLPGEJNMG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::KJDAIKKIJCI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_DMHLPGEJNMG__CTOR_OFFSET))(this);
	}

	::System::Void LOPIPAPDFOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_DMHLPGEJNMG_LOPIPAPDFOG_OFFSET))(this);
	}

	::System::Void IJEDCDKOBOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_DMHLPGEJNMG_IJEDCDKOBOG_OFFSET))(this);
	}
};
