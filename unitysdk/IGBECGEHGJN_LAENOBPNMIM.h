#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGBECGEHGJN_LAENOBPNMIM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x141D4080)
#define IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141D40A0)
#define IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141D4100)
#define IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x141D40B0)
#define IGBECGEHGJN_LAENOBPNMIM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141D4070)
#define IGBECGEHGJN_LAENOBPNMIM__CTOR_OFFSET UNITYSDK_OFFSET(0x141D2240)

inline static constexpr unsigned int IGBECGEHGJN_LAENOBPNMIM_TypeDefinitionIndex = 59010;

class IGBECGEHGJN_LAENOBPNMIM : public ::System::Object
{
public:
	::System::Int32 MDPILDGFNHN; // 0x10
	::System::Single IDBEJJEKGDI; // 0x14

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBECGEHGJN_LAENOBPNMIM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
