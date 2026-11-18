#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int CppStructOpsBase_1_TypeDefinitionIndex = 27737;

	template <typename T>
	class CppStructOpsBase_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Capabilities()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CppStructOpsBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _Size_k__BackingField; // 0x0
		::System::Int32 _Alignment_k__BackingField; // 0x0
	};
}
