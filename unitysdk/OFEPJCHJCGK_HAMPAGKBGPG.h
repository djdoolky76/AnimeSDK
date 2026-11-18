#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define OFEPJCHJCGK_HAMPAGKBGPG_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x11B259B0)
#define OFEPJCHJCGK_HAMPAGKBGPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B259C0)
#define OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B25D30)
#define OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B25D90)
#define OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B25D40)
#define OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B25990)
#define OFEPJCHJCGK_HAMPAGKBGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x11B25980)

inline static constexpr unsigned int OFEPJCHJCGK_HAMPAGKBGPG_TypeDefinitionIndex = 70722;

class OFEPJCHJCGK_HAMPAGKBGPG : public ::System::Object
{
public:
	::System::Object* CNCDBBAMLPL; // 0x10
	::System::Byte _padding0[0x10];
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single HEKBFMMBEFI; // 0x3C
	::System::Single HBFKHANEEND; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HAMPAGKBGPG_JPCPBBAMDGJ_OFFSET))(this);
	}
};
