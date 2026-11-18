#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEAECEINKCC_MPGJPPILAJN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1100F550)
#define HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1100F5F0)
#define HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1100F650)
#define HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1100F600)
#define HEAECEINKCC_MPGJPPILAJN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1100F540)
#define HEAECEINKCC_MPGJPPILAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1100F530)

inline static constexpr unsigned int HEAECEINKCC_MPGJPPILAJN_TypeDefinitionIndex = 64560;

class HEAECEINKCC_MPGJPPILAJN : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Double FNIOPKPHDEH; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_MPGJPPILAJN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
