#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GROUPWEIGHTPAIR_LCHPJFNJIAI_OFFSET UNITYSDK_OFFSET(0xEA8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GroupWeightPair_TypeDefinitionIndex = 70908;

	struct alignas(8) LoopGenerateBehavior_GroupWeightPair
	{
		::System::String* GroupContent; // 0x10
		::System::Single Weight; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* TemplateIndexes; // 0x20
		::System::Void LCHPJFNJIAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GROUPWEIGHTPAIR_LCHPJFNJIAI_OFFSET))(this);
		}

	};
}
