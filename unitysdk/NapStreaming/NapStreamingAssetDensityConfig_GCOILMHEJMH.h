#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NapStreaming { class NapStreamingAssetDensityConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10604CA0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10604CB0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_WRITE_OFFSET UNITYSDK_OFFSET(0x10604FC0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH__CTOR_OFFSET UNITYSDK_OFFSET(0x106051A0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingAssetDensityConfig_GCOILMHEJMH_TypeDefinitionIndex = 82088;

	class NapStreamingAssetDensityConfig_GCOILMHEJMH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingAssetDensityConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NapStreaming::NapStreamingAssetDensityConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_GCOILMHEJMH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
