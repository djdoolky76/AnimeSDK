#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class LIADCALCDAC;

#define LIADCALCDAC_KELJOOLKBDC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16C54520)
#define LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C54860)
#define LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C548C0)
#define LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16C54870)
#define LIADCALCDAC_KELJOOLKBDC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C54510)
#define LIADCALCDAC_KELJOOLKBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54500)

inline static constexpr unsigned int LIADCALCDAC_KELJOOLKBDC_TypeDefinitionIndex = 91497;

class LIADCALCDAC_KELJOOLKBDC : public ::System::Object
{
public:
	::LIADCALCDAC* KLHPEBKNIFB; // 0x10
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x18
	::System::Single IDBEJJEKGDI; // 0x40
	::System::Boolean MEHMAIDOBKA; // 0x44
	::System::Boolean HIHPCLJCHKK; // 0x45
	::System::Byte _padding0[0x2];
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KELJOOLKBDC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
