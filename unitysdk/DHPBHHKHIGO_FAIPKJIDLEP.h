#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHPBHHKHIGO;
namespace System { class Action; }

#define DHPBHHKHIGO_FAIPKJIDLEP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19413390)
#define DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x194135F0)
#define DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19413650)
#define DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19413600)
#define DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19413380)
#define DHPBHHKHIGO_FAIPKJIDLEP__CTOR_OFFSET UNITYSDK_OFFSET(0x19413370)

inline static constexpr unsigned int DHPBHHKHIGO_FAIPKJIDLEP_TypeDefinitionIndex = 91671;

class DHPBHHKHIGO_FAIPKJIDLEP : public ::System::Object
{
public:
	::System::Action* BOCAJJNPFBA; // 0x10
	::DHPBHHKHIGO* KLHPEBKNIFB; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Single IDBEJJEKGDI; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_FAIPKJIDLEP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
