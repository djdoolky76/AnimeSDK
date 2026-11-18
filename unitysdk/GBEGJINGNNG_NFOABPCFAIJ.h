#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GBEGJINGNNG_NFOABPCFAIJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1751B030)
#define GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1751B290)
#define GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1751B2F0)
#define GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1751B2A0)
#define GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1751B020)
#define GBEGJINGNNG_NFOABPCFAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1751B010)

inline static constexpr unsigned int GBEGJINGNNG_NFOABPCFAIJ_TypeDefinitionIndex = 59383;

class GBEGJINGNNG_NFOABPCFAIJ : public ::System::Object
{
public:
	::System::Action* ELNJNJAIFGE; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x18
	::System::Single IDBEJJEKGDI; // 0x1C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NFOABPCFAIJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
