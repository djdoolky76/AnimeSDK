#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEAECEINKCC_CDCEAEHAPHD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1407B800)
#define HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1407B900)
#define HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1407B960)
#define HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1407B910)
#define HEAECEINKCC_CDCEAEHAPHD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1407B7F0)
#define HEAECEINKCC_CDCEAEHAPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1407B7E0)

inline static constexpr unsigned int HEAECEINKCC_CDCEAEHAPHD_TypeDefinitionIndex = 64569;

class HEAECEINKCC_CDCEAEHAPHD : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Int32 MDPILDGFNHN; // 0x18
	::System::Byte _padding0[0x4];
	::System::Double HBEKKMCBGBK; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CDCEAEHAPHD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
