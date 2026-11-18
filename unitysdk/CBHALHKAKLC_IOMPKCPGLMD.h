#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class EKABGIOPGGF;
namespace System { class String; }

#define CBHALHKAKLC_IOMPKCPGLMD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1399E2D0)
#define CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1399F270)
#define CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1399F2D0)
#define CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1399F280)
#define CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1399E2C0)
#define CBHALHKAKLC_IOMPKCPGLMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1399E2B0)

inline static constexpr unsigned int CBHALHKAKLC_IOMPKCPGLMD_TypeDefinitionIndex = 55869;

class CBHALHKAKLC_IOMPKCPGLMD : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle DJCEDBPNNAH; // 0x10
	::System::String* OPKHLLFIKDO; // 0x30
	::Foundation::AssetRequestHandle ONCOLCOPPIL; // 0x38
	::EKABGIOPGGF* DDKICDNCJCF; // 0x58
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x60
	::System::String* FPCFLKCPJON; // 0x68
	::System::Single IDBEJJEKGDI; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x74

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IOMPKCPGLMD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
