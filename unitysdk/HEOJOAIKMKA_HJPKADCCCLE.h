#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class HEOJOAIKMKA;
class KPACKGEBECC;

#define HEOJOAIKMKA_HJPKADCCCLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17A41590)
#define HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A41A50)
#define HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A41AB0)
#define HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17A41A60)
#define HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A41580)
#define HEOJOAIKMKA_HJPKADCCCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A41570)

inline static constexpr unsigned int HEOJOAIKMKA_HJPKADCCCLE_TypeDefinitionIndex = 52043;

class HEOJOAIKMKA_HJPKADCCCLE : public ::System::Object
{
public:
	::KPACKGEBECC* NJIKJBIDPDJ; // 0x10
	::HEOJOAIKMKA* KLHPEBKNIFB; // 0x18
	::MoleMole::EntityHandle CFFNJLPKCPI; // 0x20
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Boolean HIHPCLJCHKK; // 0x5C
	::System::Boolean MEHMAIDOBKA; // 0x5D
	::System::Boolean PHEEOFBPPLG; // 0x5E
	::System::Byte _padding0[0x1];
	::System::Single IDBEJJEKGDI; // 0x60

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_HJPKADCCCLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
