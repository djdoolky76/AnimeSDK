#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPGLHMPEEOL;
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }

#define CPGLHMPEEOL_INDCCGINCKG_BAKBBGDOIAD_OFFSET UNITYSDK_OFFSET(0x19731D00)
#define CPGLHMPEEOL_INDCCGINCKG__CTOR_OFFSET UNITYSDK_OFFSET(0x19731CF0)

inline static constexpr unsigned int CPGLHMPEEOL_INDCCGINCKG_TypeDefinitionIndex = 80116;

class CPGLHMPEEOL_INDCCGINCKG : public ::System::Object
{
public:
	::MoleMole::UIGeneralFilterItemRowWidgetController* MNOMCCLBJAO; // 0x10
	::CPGLHMPEEOL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGLHMPEEOL_INDCCGINCKG__CTOR_OFFSET))(this);
	}

	::System::Void BAKBBGDOIAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGLHMPEEOL_INDCCGINCKG_BAKBBGDOIAD_OFFSET))(this);
	}
};
