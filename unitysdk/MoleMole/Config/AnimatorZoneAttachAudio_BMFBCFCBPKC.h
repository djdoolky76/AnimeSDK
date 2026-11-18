#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAttachAudio; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAA52F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAA5300)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_WRITE_OFFSET UNITYSDK_OFFSET(0xFAA5930)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA5CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAttachAudio_BMFBCFCBPKC_TypeDefinitionIndex = 39767;

	class AnimatorZoneAttachAudio_BMFBCFCBPKC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAttachAudio*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAttachAudio*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAttachAudio*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAttachAudio*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHAUDIO_BMFBCFCBPKC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
