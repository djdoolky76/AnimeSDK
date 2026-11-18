#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_29EAD41FF6D5099B_COMBINE_OFFSET UNITYSDK_OFFSET(0x20073030)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_29EAD41FF6D5099B__CCTOR_OFFSET UNITYSDK_OFFSET(0x20073040)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_29EAD41FF6D5099B_TypeDefinitionIndex = 6543;

	class HashHelpers_29EAD41FF6D5099B : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_29EAD41FF6D5099B_TypeDefinitionIndex)->GetStaticField(0x3070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_29EAD41FF6D5099B__CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_29EAD41FF6D5099B_COMBINE_OFFSET))(h1, h2);
		}
	};
}
