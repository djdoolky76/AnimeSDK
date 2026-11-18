#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DKAKFNNKIIE_BLKPOLLAHOC_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x15A4EC80)
#define DKAKFNNKIIE_BLKPOLLAHOC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15A4EC90)
#define DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A4EFB0)
#define DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A4F010)
#define DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15A4EFC0)
#define DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A4EC60)
#define DKAKFNNKIIE_BLKPOLLAHOC__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4EC50)

inline static constexpr unsigned int DKAKFNNKIIE_BLKPOLLAHOC_TypeDefinitionIndex = 43878;

class DKAKFNNKIIE_BLKPOLLAHOC : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Object* CNCDBBAMLPL; // 0x20
	::System::Byte _padding0[0x10];
	::System::Single HEKBFMMBEFI; // 0x38
	::System::Single HBFKHANEEND; // 0x3C
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_BLKPOLLAHOC_JPCPBBAMDGJ_OFFSET))(this);
	}
};
