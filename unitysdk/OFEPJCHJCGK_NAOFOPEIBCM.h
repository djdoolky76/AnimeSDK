#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OFEPJCHJCGK_NAOFOPEIBCM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15FDB030)
#define OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15FDBAB0)
#define OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15FDBB10)
#define OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15FDBAC0)
#define OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FDB020)
#define OFEPJCHJCGK_NAOFOPEIBCM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDB010)

inline static constexpr unsigned int OFEPJCHJCGK_NAOFOPEIBCM_TypeDefinitionIndex = 70707;

class OFEPJCHJCGK_NAOFOPEIBCM : public ::System::Object
{
public:
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x20
	::System::String* LLJHPOGGMMK; // 0x28
	::System::Single FNGGJOBOFOE; // 0x30
	::System::Boolean MPHAJBNLCPO; // 0x34
	::System::Boolean CEPNOMOHKMK; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NAOFOPEIBCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
