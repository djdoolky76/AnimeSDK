#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviour_SyncBlendTreeParams_TypeDefinitionIndex = 50055;

	struct alignas(8) SyncAnimatorStateBehaviour_SyncBlendTreeParams
	{
		::System::String* StateFullPathName; // 0x10
		::System::Int32 StateFullPathHash; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* ParamInfos; // 0x20
	};
}
