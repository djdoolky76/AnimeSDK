#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_C4D906A5EFBE6B78_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE18980)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_C4D906A5EFBE6B78_COMBINE_OFFSET UNITYSDK_OFFSET(0x1EE18970)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_C4D906A5EFBE6B78_TypeDefinitionIndex = 4988;

	class HashHelpers_C4D906A5EFBE6B78 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandomSeed()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics.Hashing", "HashHelpers")->GetStaticField(0x120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_C4D906A5EFBE6B78_CCTOR_OFFSET))();
		}

		static ::System::Int32 Combine(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_C4D906A5EFBE6B78_COMBINE_OFFSET))(a1, a2);
		}

	};
}
