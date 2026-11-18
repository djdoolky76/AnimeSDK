#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class GBBMGFHECKO;
class KPACKGEBECC;

#define GBBMGFHECKO_DLDECAPPDHE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11C88E60)
#define GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11C89200)
#define GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11C89260)
#define GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11C89210)
#define GBBMGFHECKO_DLDECAPPDHE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C88E50)
#define GBBMGFHECKO_DLDECAPPDHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C88E40)

inline static constexpr unsigned int GBBMGFHECKO_DLDECAPPDHE_TypeDefinitionIndex = 39017;

class GBBMGFHECKO_DLDECAPPDHE : public ::System::Object
{
public:
	::GBBMGFHECKO* KLHPEBKNIFB; // 0x10
	::KPACKGEBECC* NJIKJBIDPDJ; // 0x18
	::MoleMole::EntityHandle CFFNJLPKCPI; // 0x20
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x30
	::System::Single IDBEJJEKGDI; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Boolean HIHPCLJCHKK; // 0x60
	::System::Boolean MEHMAIDOBKA; // 0x61

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DLDECAPPDHE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
