#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLFLLOAJKIM;
class GEIHCPAOKKK;
class IDMDKJIGAEB;
namespace MoleMole::Battle { class Entity; }

#define BLFLLOAJKIM_GPAKABMICAE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10E0BE30)
#define BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E0BF80)
#define BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E0BFE0)
#define BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10E0BF90)
#define BLFLLOAJKIM_GPAKABMICAE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E0BE20)
#define BLFLLOAJKIM_GPAKABMICAE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0BE10)

inline static constexpr unsigned int BLFLLOAJKIM_GPAKABMICAE_TypeDefinitionIndex = 61700;

class BLFLLOAJKIM_GPAKABMICAE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* INIHJFPILNM; // 0x10
	::IDMDKJIGAEB* FFNKDGGHBPP; // 0x18
	::GEIHCPAOKKK* MDGEGNOGBCO; // 0x20
	::BLFLLOAJKIM* KLHPEBKNIFB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single IDBEJJEKGDI; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLLOAJKIM_GPAKABMICAE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
