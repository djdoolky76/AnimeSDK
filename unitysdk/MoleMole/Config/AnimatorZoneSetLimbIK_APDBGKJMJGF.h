#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetLimbIK; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121AEC90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121AECA0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_WRITE_OFFSET UNITYSDK_OFFSET(0x121AF0F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF__CTOR_OFFSET UNITYSDK_OFFSET(0x121AF380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetLimbIK_APDBGKJMJGF_TypeDefinitionIndex = 91065;

	class AnimatorZoneSetLimbIK_APDBGKJMJGF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetLimbIK*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetLimbIK*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetLimbIK*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetLimbIK*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETLIMBIK_APDBGKJMJGF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
