#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMBDMMPKIHO;
namespace MoleMole { class UIWindowController; }

#define BMBDMMPKIHO_CDIEKHAOCEC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1151BAC0)
#define BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1151CDF0)
#define BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1151CE50)
#define BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1151CE00)
#define BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1151BAB0)
#define BMBDMMPKIHO_CDIEKHAOCEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1151BAA0)

inline static constexpr unsigned int BMBDMMPKIHO_CDIEKHAOCEC_TypeDefinitionIndex = 65322;

class BMBDMMPKIHO_CDIEKHAOCEC : public ::System::Object
{
public:
	::BMBDMMPKIHO* KLHPEBKNIFB; // 0x10
	::MoleMole::UIWindowController* JLPPAMFFJOC; // 0x18
	::System::Single GLBEINICGBD; // 0x20
	::System::Single IDBEJJEKGDI; // 0x24
	::System::Single FDPIEPAKAEO; // 0x28
	::System::Boolean KFGOJIHDNPE; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_CDIEKHAOCEC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
