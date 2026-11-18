#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_JFKDIFDEAFL_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1940F340)
#define DFPKJPPEOKJ_JFKDIFDEAFL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1940F350)
#define DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1940F6C0)
#define DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1940F720)
#define DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1940F6D0)
#define DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1940F320)
#define DFPKJPPEOKJ_JFKDIFDEAFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1940F310)

inline static constexpr unsigned int DFPKJPPEOKJ_JFKDIFDEAFL_TypeDefinitionIndex = 76788;

class DFPKJPPEOKJ_JFKDIFDEAFL : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Object* CNCDBBAMLPL; // 0x18
	::System::Byte _padding0[0x10];
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x30
	::System::Single AADOLGJDPEH; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFKDIFDEAFL_JPCPBBAMDGJ_OFFSET))(this);
	}
};
