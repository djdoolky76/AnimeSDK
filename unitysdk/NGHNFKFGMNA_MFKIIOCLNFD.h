#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class PFEOJDIJIBM;

#define NGHNFKFGMNA_MFKIIOCLNFD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12893780)
#define NGHNFKFGMNA_MFKIIOCLNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x12893770)

inline static constexpr unsigned int NGHNFKFGMNA_MFKIIOCLNFD_TypeDefinitionIndex = 58749;

class NGHNFKFGMNA_MFKIIOCLNFD : public ::System::Object
{
public:
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_MFKIIOCLNFD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::PFEOJDIJIBM* FDGLDBOBFDJ, ::System::Int32 KFADOGCIMKJ)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_MFKIIOCLNFD_LIDNPLMPHAL_OFFSET))(this, FDGLDBOBFDJ, KFADOGCIMKJ);
	}
};
