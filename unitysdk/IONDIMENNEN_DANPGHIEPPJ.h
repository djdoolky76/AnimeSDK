#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IONDIMENNEN_DANPGHIEPPJ_LPBIFADHMNF_OFFSET UNITYSDK_OFFSET(0x142022B0)
#define IONDIMENNEN_DANPGHIEPPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x142022A0)

inline static constexpr unsigned int IONDIMENNEN_DANPGHIEPPJ_TypeDefinitionIndex = 41848;

class IONDIMENNEN_DANPGHIEPPJ : public ::System::Object
{
public:
	::System::Int32 LKGAAIGDDBH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONDIMENNEN_DANPGHIEPPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LPBIFADHMNF(::System::Int32 GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IONDIMENNEN_DANPGHIEPPJ_LPBIFADHMNF_OFFSET))(this, GEGOALONGBI);
	}
};
