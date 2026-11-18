#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace System { class Object; }
namespace UnrealTypes { class Object; }

#define FGEBBDHBKDG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x78F170)

inline static constexpr unsigned int FGEBBDHBKDG_TypeDefinitionIndex = 42925;

struct alignas(8) FGEBBDHBKDG
{
	::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>> DGDENJKAJDB; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>> LIIALLLAFGG; // 0x20
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> NACGBBLEGPG; // 0x30
	::System::Byte _padding2[0x8];
	::Unity::Collections::NativeArray_1<::System::Object*> FHDCFDJCJNM; // 0x40

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGEBBDHBKDG_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
