#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B18E174BBCE2DD62.h"
#include "unitysdk/System/Nullable_1.h"

#define A84AF7AD60F89044__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A84AF7AD60F89044_TypeDefinitionIndex = 9101;

class A84AF7AD60F89044 : public ::E379DE61A548837D
{
public:
	::System::Single EE9EFD53B52CD165; // 0x38
	::System::Boolean EA42768BA860640D; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Nullable_1<::E68AA4EB51923C98::B18E174BBCE2DD62> E19583DBF3A86864; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A84AF7AD60F89044__CTOR_OFFSET))(this);
	}
};
