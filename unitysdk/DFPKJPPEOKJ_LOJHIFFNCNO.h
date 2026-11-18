#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFPKJPPEOKJ;
class DFPKJPPEOKJ_OIOPPOFDHBK;
namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_LOJHIFFNCNO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16B9AC50)
#define DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9B5E0)
#define DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9B640)
#define DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16B9B5F0)
#define DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B9AC40)
#define DFPKJPPEOKJ_LOJHIFFNCNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9AC30)

inline static constexpr unsigned int DFPKJPPEOKJ_LOJHIFFNCNO_TypeDefinitionIndex = 76783;

class DFPKJPPEOKJ_LOJHIFFNCNO : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::DFPKJPPEOKJ_OIOPPOFDHBK* PGDOJBDJBOL; // 0x20
	::DFPKJPPEOKJ* KLHPEBKNIFB; // 0x28
	::System::Single LAOJPMOJNLF; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Single CLMNLPKFBFA; // 0x38
	::System::Single JOBPNPHNJLO; // 0x3C
	::System::Int32 JKFDBKFHIBO; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LOJHIFFNCNO_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
