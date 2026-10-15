#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Resolvers { class DynamicGenericResolver; }

#define MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCE090)
#define MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCE080)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicGenericResolver_TypeDefinitionIndex = 7256;

	class DynamicGenericResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicGenericResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicGenericResolver**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicGenericResolver")->GetStaticField(0x26640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICGENERICRESOLVER_CCTOR_OFFSET))();
		}

	};
}
