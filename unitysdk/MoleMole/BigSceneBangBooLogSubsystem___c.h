#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130450C0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13045100)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_20_0_OFFSET UNITYSDK_OFFSET(0x13045110)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_20_1_OFFSET UNITYSDK_OFFSET(0x13045120)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex = 73608;

	class BigSceneBangBooLogSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x46B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendRequest_g__RpcCallback_20_0(::OAEFGCLEHHO* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_20_0_OFFSET))(this, rcvMessage);
		}

		::System::Void _SendRequest_g__RpcError_20_1(::OAEFGCLEHHO* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_20_1_OFFSET))(this, rcvMessage);
		}
	};
}
