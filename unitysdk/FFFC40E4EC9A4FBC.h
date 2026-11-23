#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFFC40E4EC9A4FBC__CTOR_OFFSET UNITYSDK_OFFSET(0x27095C0)

inline static constexpr unsigned int FFFC40E4EC9A4FBC_TypeDefinitionIndex = 2927;

class FFFC40E4EC9A4FBC : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt64>* A2AC4976855B375E; // 0x10
	::Il2CppArray<::System::UInt32>* F288416CE8243544; // 0x18
	::Il2CppArray<::System::UInt32>* BF3B0C789211C4E4; // 0x20
	::Il2CppArray<::System::Int32>* E24BE67027A5D9E0; // 0x28
	::Il2CppArray<::System::Int32>* F46094D93ED30CEA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt32>* A9D97E882F4C3806; // 0x38

	::System::Void _ctor(::Il2CppArray<::System::UInt64>* A2AC4976855B375E, ::Il2CppArray<::System::UInt32>* F288416CE8243544, ::Il2CppArray<::System::UInt32>* BF3B0C789211C4E4, ::Il2CppArray<::System::Int32>* E24BE67027A5D9E0, ::Il2CppArray<::System::Int32>* F46094D93ED30CEA, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt32>* A9D97E882F4C3806)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt32>*))((::PBYTE)hIl2Cpp + FFFC40E4EC9A4FBC__CTOR_OFFSET))(this, A2AC4976855B375E, F288416CE8243544, BF3B0C789211C4E4, E24BE67027A5D9E0, F46094D93ED30CEA, A9D97E882F4C3806);
	}
};
