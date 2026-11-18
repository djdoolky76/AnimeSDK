#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNGGMIDBJEG_DBKDKFHLKAB.h"
#include "unitysdk/System/Object.h"

class NNGGMIDBJEG;

#define NNGGMIDBJEG_LANNPHJAKEI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFD0EF90)
#define NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD0F700)
#define NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFD0F760)
#define NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFD0F710)
#define NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD0EF80)
#define NNGGMIDBJEG_LANNPHJAKEI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD0EF70)

inline static constexpr unsigned int NNGGMIDBJEG_LANNPHJAKEI_TypeDefinitionIndex = 57211;

class NNGGMIDBJEG_LANNPHJAKEI : public ::System::Object
{
public:
	::NNGGMIDBJEG* KLHPEBKNIFB; // 0x10
	::NNGGMIDBJEG_DBKDKFHLKAB PGDOJBDJBOL; // 0x18
	::System::Object* IDBEJJEKGDI; // 0x28
	::System::Boolean IOKEJJODJAK; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single JMGAHNDKFLK; // 0x34
	::System::Single DFCJEGKMKOK; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C
	::System::Single LFGDIPFPGED; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_LANNPHJAKEI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
