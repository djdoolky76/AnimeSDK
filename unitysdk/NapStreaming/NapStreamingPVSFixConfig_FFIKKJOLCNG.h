#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NapStreaming { class NapStreamingPVSFixConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF1657F0)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF165800)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_WRITE_OFFSET UNITYSDK_OFFSET(0xF165990)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG__CTOR_OFFSET UNITYSDK_OFFSET(0xF165AB0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingPVSFixConfig_FFIKKJOLCNG_TypeDefinitionIndex = 85548;

	class NapStreamingPVSFixConfig_FFIKKJOLCNG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingPVSFixConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NapStreaming::NapStreamingPVSFixConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_FFIKKJOLCNG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
