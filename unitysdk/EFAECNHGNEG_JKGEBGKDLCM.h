#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

#define EFAECNHGNEG_JKGEBGKDLCM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x154A3DB0)
#define EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154A3EB0)
#define EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154A3F10)
#define EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x154A3EC0)
#define EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154A3DA0)
#define EFAECNHGNEG_JKGEBGKDLCM__CTOR_OFFSET UNITYSDK_OFFSET(0x154A3C10)

inline static constexpr unsigned int EFAECNHGNEG_JKGEBGKDLCM_TypeDefinitionIndex = 83997;

class EFAECNHGNEG_JKGEBGKDLCM : public ::System::Object
{
public:
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x10
	::System::Int32 DABCKBIAKHA; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C
	::System::Single IDBEJJEKGDI; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_JKGEBGKDLCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
