#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFPKJPPEOKJ;
class DFPKJPPEOKJ_FFJGHOBBLPD;
namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_LCFIMOFGHJC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15370E30)
#define DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15371350)
#define DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x153713B0)
#define DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15371360)
#define DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15370E20)
#define DFPKJPPEOKJ_LCFIMOFGHJC__CTOR_OFFSET UNITYSDK_OFFSET(0x15370E10)

inline static constexpr unsigned int DFPKJPPEOKJ_LCFIMOFGHJC_TypeDefinitionIndex = 76794;

class DFPKJPPEOKJ_LCFIMOFGHJC : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x10
	::DFPKJPPEOKJ_FFJGHOBBLPD* PGDOJBDJBOL; // 0x18
	::DFPKJPPEOKJ* KLHPEBKNIFB; // 0x20
	::System::Object* IDBEJJEKGDI; // 0x28
	::System::Single CLMNLPKFBFA; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LCFIMOFGHJC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
