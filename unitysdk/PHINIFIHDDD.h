#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace System { class Object; }
namespace UnrealTypes { class Object; }

#define PHINIFIHDDD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x821400)

inline static constexpr unsigned int PHINIFIHDDD_TypeDefinitionIndex = 82266;

struct alignas(8) PHINIFIHDDD
{
	::System::Single LLBEKEFONPC; // 0x10
	::System::Byte _padding0[0x4];
	::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>> DGDENJKAJDB; // 0x18
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>> LIIALLLAFGG; // 0x28
	::System::Byte _padding2[0x8];
	::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> NACGBBLEGPG; // 0x38
	::System::Byte _padding3[0x8];
	::Unity::Collections::NativeArray_1<::System::Object*> FHDCFDJCJNM; // 0x48

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHINIFIHDDD_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
