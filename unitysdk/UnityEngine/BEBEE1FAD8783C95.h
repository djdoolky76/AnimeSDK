#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Enum; }
namespace System { class String; }
namespace System { class Type; }

namespace UnityEngine
{
	inline static constexpr unsigned int BEBEE1FAD8783C95_TypeDefinitionIndex = 17280;

	struct alignas(8) BEBEE1FAD8783C95
	{
		::Il2CppArray<::System::Enum*>* BAACBF7DD108E3B8; // 0x10
		::Il2CppArray<::System::Int32>* BB19F59C7D43275E; // 0x18
		::Il2CppArray<::System::String*>* A7E3B20128B3D160; // 0x20
		::Il2CppArray<::System::String*>* A2E71F16FFA02304; // 0x28
		::Il2CppArray<::System::String*>* F1D93300FBAE2A4D; // 0x30
		::System::Boolean FB2001C0410BD72C; // 0x38
		::System::Byte _padding0[0x7];
		::System::Type* A218E79CCBD226BF; // 0x40
		::System::Boolean EA361FDFEAC9A44E; // 0x48
		::System::Boolean A273A45C834C6A24; // 0x49
	};
}
