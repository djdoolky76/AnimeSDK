#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"

#define AAPNJPIICDO_IDNFKABPDKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x860E90)
#define AAPNJPIICDO_IDNFKABPDKD__CTOR_OFFSET UNITYSDK_OFFSET(0x860DF0)

inline static constexpr unsigned int AAPNJPIICDO_IDNFKABPDKD_TypeDefinitionIndex = 34810;

struct alignas(4) AAPNJPIICDO_IDNFKABPDKD
{
	::System::Int32 ALLACGIFBHE; // 0x10
	::System::Int32 POBNBHLADNM; // 0x14
	::System::Int32 NPIGNHPELJF; // 0x18

	::System::Void _ctor(::System::Int32 ALLACGIFBHE, ::Il2CppArray<::SGF::SEvent::DelegateEx>*& GHNKOPPHCBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::SGF::SEvent::DelegateEx>*&))((::PBYTE)hIl2Cpp + AAPNJPIICDO_IDNFKABPDKD__CTOR_OFFSET))(this, ALLACGIFBHE, GHNKOPPHCBF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPNJPIICDO_IDNFKABPDKD_DISPOSE_OFFSET))(this);
	}
};
