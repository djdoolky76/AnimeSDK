#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C9D30)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C9CA0)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1C7C9CB0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_TypeDefinitionIndex = 37064;

	class ReplicationFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("RPG.Client.LittleGameShare", "ReplicationFormatterResolver")->GetStaticField(0x1E570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}

	};
}
