#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_MGNNCNFCKBN_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1940F760)
#define DFPKJPPEOKJ_MGNNCNFCKBN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1940F770)
#define DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1940FAF0)
#define DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1940FB50)
#define DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1940FB00)
#define DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1940F740)
#define DFPKJPPEOKJ_MGNNCNFCKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1940F730)

inline static constexpr unsigned int DFPKJPPEOKJ_MGNNCNFCKBN_TypeDefinitionIndex = 76792;

class DFPKJPPEOKJ_MGNNCNFCKBN : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x10
	::System::Object* CNCDBBAMLPL; // 0x18
	::System::Byte _padding0[0x10];
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single HEKBFMMBEFI; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MGNNCNFCKBN_JPCPBBAMDGJ_OFFSET))(this);
	}
};
