#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EnumSerializer_1_TypeDefinitionIndex = 7559;

	template <typename T>
	class EnumSerializer_1
	{
	public:
		static ::System::Int32* StaticGet_SizeOf_T()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
