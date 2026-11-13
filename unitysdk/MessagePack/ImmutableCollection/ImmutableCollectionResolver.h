#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::ImmutableCollection { class ImmutableCollectionResolver; }

#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x174A1360)
#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x174A1350)

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableCollectionResolver_TypeDefinitionIndex = 7379;

	class ImmutableCollectionResolver : public ::System::Object
	{
	public:
		static ::MessagePack::ImmutableCollection::ImmutableCollectionResolver** StaticGet_Instance()
		{
			return (::MessagePack::ImmutableCollection::ImmutableCollectionResolver**)UnitySDK::FromName("MessagePack.ImmutableCollection", "ImmutableCollectionResolver")->GetStaticField(0x2D580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER_CCTOR_OFFSET))();
		}

	};
}
