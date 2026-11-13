#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37E370)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET UNITYSDK_OFFSET(0x1E37E360)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 796;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics.Hashing", "HashHelpers")->GetStaticField(0x3B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET))(a1, a2);
		}

	};
}
