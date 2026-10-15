#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Resolvers { class StaticEnumResolver; }

#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBD5710)
#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD5700)

namespace MessagePack::Resolvers
{
	class StaticEnumResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StaticEnumResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StaticEnumResolver**)UnitySDK::FromName("MessagePack.Resolvers", "StaticEnumResolver")->GetStaticField(0x26630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CCTOR_OFFSET))();
		}

	};
}
