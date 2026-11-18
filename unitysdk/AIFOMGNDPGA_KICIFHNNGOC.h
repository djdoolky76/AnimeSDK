#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define AIFOMGNDPGA_KICIFHNNGOC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x135E8AE0)
#define AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x135E8DD0)
#define AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x135E8E30)
#define AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x135E8DE0)
#define AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135E8AD0)
#define AIFOMGNDPGA_KICIFHNNGOC__CTOR_OFFSET UNITYSDK_OFFSET(0x135E8AC0)

inline static constexpr unsigned int AIFOMGNDPGA_KICIFHNNGOC_TypeDefinitionIndex = 47268;

class AIFOMGNDPGA_KICIFHNNGOC : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Single HBFKHANEEND; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_KICIFHNNGOC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
