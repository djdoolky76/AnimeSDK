#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_IJJLJMLBLBL_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x16B9AC20)
#define DFPKJPPEOKJ_IJJLJMLBLBL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1974FCF0)
#define DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9ABB0)
#define DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9AC10)
#define DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16B9ABC0)
#define DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1974FCD0)
#define DFPKJPPEOKJ_IJJLJMLBLBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1974FCC0)

inline static constexpr unsigned int DFPKJPPEOKJ_IJJLJMLBLBL_TypeDefinitionIndex = 76793;

class DFPKJPPEOKJ_IJJLJMLBLBL : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x18
	::System::Object* CNCDBBAMLPL; // 0x20
	::System::Byte _padding0[0x18];
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Single HEKBFMMBEFI; // 0x44

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IJJLJMLBLBL_JPCPBBAMDGJ_OFFSET))(this);
	}
};
