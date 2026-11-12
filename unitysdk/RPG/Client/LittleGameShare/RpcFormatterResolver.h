#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D979D30)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D979CA0)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1D979CB0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcFormatterResolver_TypeDefinitionIndex = 37989;

	class RpcFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("RPG.Client.LittleGameShare", "RpcFormatterResolver")->GetStaticField(0x17C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}

	};
}
