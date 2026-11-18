#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class HDJBEAIFJLO;
namespace MoleMole::Battle { class Entity; }

#define HDJBEAIFJLO_HELMEPLEDFH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16F248D0)
#define HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F24A10)
#define HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F24A70)
#define HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16F24A20)
#define HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F248C0)
#define HDJBEAIFJLO_HELMEPLEDFH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F248B0)

inline static constexpr unsigned int HDJBEAIFJLO_HELMEPLEDFH_TypeDefinitionIndex = 67840;

class HDJBEAIFJLO_HELMEPLEDFH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* INIHJFPILNM; // 0x10
	::HDJBEAIFJLO* KLHPEBKNIFB; // 0x18
	::GEIHCPAOKKK* MDGEGNOGBCO; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28
	::System::Single IDBEJJEKGDI; // 0x2C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBEAIFJLO_HELMEPLEDFH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
