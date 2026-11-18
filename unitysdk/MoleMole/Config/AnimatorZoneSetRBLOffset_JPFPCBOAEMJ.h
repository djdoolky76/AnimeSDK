#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetRBLOffset; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B8B790)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B8B7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_WRITE_OFFSET UNITYSDK_OFFSET(0x18B8BBF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8BE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetRBLOffset_JPFPCBOAEMJ_TypeDefinitionIndex = 76148;

	class AnimatorZoneSetRBLOffset_JPFPCBOAEMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetRBLOffset*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetRBLOffset*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetRBLOffset*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetRBLOffset*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBLOFFSET_JPFPCBOAEMJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
