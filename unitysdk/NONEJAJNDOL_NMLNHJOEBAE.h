#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NONEJAJNDOL_NMLNHJOEBAE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x106818D0)
#define NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10681970)
#define NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x106819D0)
#define NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10681980)
#define NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106818C0)
#define NONEJAJNDOL_NMLNHJOEBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x106818B0)

inline static constexpr unsigned int NONEJAJNDOL_NMLNHJOEBAE_TypeDefinitionIndex = 78565;

class NONEJAJNDOL_NMLNHJOEBAE : public ::System::Object
{
public:
	::System::UInt32 NJNCGJLHLKC; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x14
	::System::Single IDBEJJEKGDI; // 0x18

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEJAJNDOL_NMLNHJOEBAE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
