#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APNMGOHIMKO;
namespace MoleMole { class UIDataFixGameWidgetController; }

#define APNMGOHIMKO_DNMFPLEOFCI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1505CEC0)
#define APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1505DA60)
#define APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1505DAC0)
#define APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1505DA70)
#define APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1505CEB0)
#define APNMGOHIMKO_DNMFPLEOFCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1505CEA0)

inline static constexpr unsigned int APNMGOHIMKO_DNMFPLEOFCI_TypeDefinitionIndex = 71165;

class APNMGOHIMKO_DNMFPLEOFCI : public ::System::Object
{
public:
	::MoleMole::UIDataFixGameWidgetController* IAPKABMDJNF; // 0x10
	::APNMGOHIMKO* KLHPEBKNIFB; // 0x18
	::System::Boolean FNKPAOHCOPM; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x24
	::System::Single IDBEJJEKGDI; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNMGOHIMKO_DNMFPLEOFCI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
