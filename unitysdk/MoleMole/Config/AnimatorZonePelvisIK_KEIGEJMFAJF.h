#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZonePelvisIK; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121ACDA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121ACDB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_WRITE_OFFSET UNITYSDK_OFFSET(0x121AD480)
#define MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF__CTOR_OFFSET UNITYSDK_OFFSET(0x121AD870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZonePelvisIK_KEIGEJMFAJF_TypeDefinitionIndex = 86683;

	class AnimatorZonePelvisIK_KEIGEJMFAJF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZonePelvisIK*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZonePelvisIK*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZonePelvisIK*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZonePelvisIK*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPELVISIK_KEIGEJMFAJF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
