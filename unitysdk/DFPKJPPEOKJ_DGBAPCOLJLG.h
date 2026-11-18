#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DFPKJPPEOKJ_DGBAPCOLJLG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147C8EC0)
#define DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147C9060)
#define DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147C90C0)
#define DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x147C9070)
#define DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147C8EB0)
#define DFPKJPPEOKJ_DGBAPCOLJLG__CTOR_OFFSET UNITYSDK_OFFSET(0x147C8EA0)

inline static constexpr unsigned int DFPKJPPEOKJ_DGBAPCOLJLG_TypeDefinitionIndex = 76785;

class DFPKJPPEOKJ_DGBAPCOLJLG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DGBAPCOLJLG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
