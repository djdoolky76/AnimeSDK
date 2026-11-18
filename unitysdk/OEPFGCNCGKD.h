#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OEPFGCNCGKD_IBCLNFLHOHL_OFFSET UNITYSDK_OFFSET(0x5FAD20)
#define OEPFGCNCGKD_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x5FACB0)

inline static constexpr unsigned int OEPFGCNCGKD_TypeDefinitionIndex = 67253;

struct alignas(8) OEPFGCNCGKD
{
	::Il2CppArray<::System::Boolean>* DOFCLPCLHOJ; // 0x10
	::Il2CppArray<::System::Single>* HCKIKOMFMDP; // 0x18
	::System::Int32 GGFLNPIDOOG; // 0x20

	::System::Boolean NFJIDKBNIKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPFGCNCGKD_NFJIDKBNIKP_OFFSET))(this);
	}

	::System::Single IBCLNFLHOHL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPFGCNCGKD_IBCLNFLHOHL_OFFSET))(this);
	}
};
