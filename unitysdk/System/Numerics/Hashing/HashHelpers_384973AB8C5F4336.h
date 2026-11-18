#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_384973AB8C5F4336_COMBINE_OFFSET UNITYSDK_OFFSET(0x1F420D70)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_384973AB8C5F4336__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F420D80)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_384973AB8C5F4336_TypeDefinitionIndex = 6578;

	class HashHelpers_384973AB8C5F4336 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_384973AB8C5F4336_TypeDefinitionIndex)->GetStaticField(0x3090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_384973AB8C5F4336__CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_384973AB8C5F4336_COMBINE_OFFSET))(h1, h2);
		}
	};
}
