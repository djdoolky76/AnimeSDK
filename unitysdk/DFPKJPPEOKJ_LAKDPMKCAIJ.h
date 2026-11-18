#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMCCGNIHBGO;
class DFPKJPPEOKJ_LJJAGNHBEDD;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFPKJPPEOKJ_LAKDPMKCAIJ_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1A1DEED0)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A1DEEF0)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_NIEADFOCLEC_OFFSET UNITYSDK_OFFSET(0x1A1DEEE0)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1DF560)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A1DF5C0)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A1DF570)
#define DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1DEEA0)
#define DFPKJPPEOKJ_LAKDPMKCAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DEE90)

inline static constexpr unsigned int DFPKJPPEOKJ_LAKDPMKCAIJ_TypeDefinitionIndex = 76790;

class DFPKJPPEOKJ_LAKDPMKCAIJ : public ::System::Object
{
public:
	::System::Object* CNCDBBAMLPL; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* IDBEJJEKGDI; // 0x28
	::System::Collections::Generic::HashSet_1<::AMCCGNIHBGO*>* KJIEAJPJCHL; // 0x30
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x38
	::DFPKJPPEOKJ_LJJAGNHBEDD* PGDOJBDJBOL; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void NIEADFOCLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_NIEADFOCLEC_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LAKDPMKCAIJ_JPCPBBAMDGJ_OFFSET))(this);
	}
};
