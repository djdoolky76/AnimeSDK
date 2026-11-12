#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9797F0)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D979760)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1D979770)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_TypeDefinitionIndex = 37992;

	class ReplicationFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("RPG.Client.LittleGameShare", "ReplicationFormatterResolver")->GetStaticField(0x17C60);
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
