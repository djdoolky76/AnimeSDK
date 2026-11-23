#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A6E2094AF2BCEA3A_A38967FDD89066BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A6E2094AF2BCEA3A_A38967FDD89066BE_TypeDefinitionIndex = 6450;

class A6E2094AF2BCEA3A_A38967FDD89066BE : public ::System::Object
{
public:
	::System::UInt32 E147D62301D206E7; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E4B55EE0EC5CC11E, ::E865F6F8B8B44C1E>* EE46AE0F9DF136CF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6E2094AF2BCEA3A_A38967FDD89066BE__CTOR_OFFSET))(this);
	}
};
