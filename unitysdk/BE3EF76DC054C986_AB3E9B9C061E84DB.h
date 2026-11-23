#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE3EF76DC054C986;
template <typename T> class FCECB52A00C1344E;

#define BE3EF76DC054C986_AB3E9B9C061E84DB_E5B1BD0B1498C9C3_OFFSET UNITYSDK_OFFSET(0x2242D50)
#define BE3EF76DC054C986_AB3E9B9C061E84DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE3EF76DC054C986_AB3E9B9C061E84DB_TypeDefinitionIndex = 9161;

class BE3EF76DC054C986_AB3E9B9C061E84DB : public ::System::Object
{
public:
	::System::Boolean B15EA783391E1E1A; // 0x10
	::System::Byte _padding0[0x7];
	::FCECB52A00C1344E<::System::UInt32>* B87F73DB182CBE90; // 0x18
	::BE3EF76DC054C986* A544919C800E2923; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE3EF76DC054C986_AB3E9B9C061E84DB__CTOR_OFFSET))(this);
	}

	::System::Boolean E5B1BD0B1498C9C3(::System::UInt32 BBDA55B8B235A7F7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BE3EF76DC054C986_AB3E9B9C061E84DB_E5B1BD0B1498C9C3_OFFSET))(this, BBDA55B8B235A7F7);
	}
};
