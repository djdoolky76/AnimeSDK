#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MonoProtectionDisposal.h"
namespace System { class Object; }

#define MESSAGEPACK_MONOPROTECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCDB10)
#define MESSAGEPACK_MONOPROTECTION_ENTERREFEMITLOCK_OFFSET UNITYSDK_OFFSET(0x1BBCD9B0)
#define MESSAGEPACK_MONOPROTECTION_GET_ISRUNNINGONMONO_OFFSET UNITYSDK_OFFSET(0x1BBCD950)

namespace MessagePack
{
	inline static constexpr unsigned int MonoProtection_TypeDefinitionIndex = 7233;

	struct alignas(4) MonoProtection
	{
		static ::System::Object** StaticGet_RefEmitLock()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "MonoProtection")->GetStaticField(0x2CCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsRunningOnMono()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION_GET_ISRUNNINGONMONO_OFFSET))();
		}

		static ::MessagePack::MonoProtectionDisposal EnterRefEmitLock()
		{
			return ((::MessagePack::MonoProtectionDisposal(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTION_ENTERREFEMITLOCK_OFFSET))();
		}

	};
}
