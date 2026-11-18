#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_127476E6FCD1E352_COMBINE_OFFSET UNITYSDK_OFFSET(0x1EC6B010)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_127476E6FCD1E352__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6B020)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_127476E6FCD1E352_TypeDefinitionIndex = 6399;

	class HashHelpers_127476E6FCD1E352 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_127476E6FCD1E352_TypeDefinitionIndex)->GetStaticField(0x2F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_127476E6FCD1E352__CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_127476E6FCD1E352_COMBINE_OFFSET))(h1, h2);
		}
	};
}
