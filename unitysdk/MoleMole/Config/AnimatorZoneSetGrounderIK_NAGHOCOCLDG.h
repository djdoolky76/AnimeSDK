#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetGrounderIK; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192903A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192903B0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_WRITE_OFFSET UNITYSDK_OFFSET(0x19290940)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG__CTOR_OFFSET UNITYSDK_OFFSET(0x19290C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetGrounderIK_NAGHOCOCLDG_TypeDefinitionIndex = 93180;

	class AnimatorZoneSetGrounderIK_NAGHOCOCLDG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetGrounderIK*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetGrounderIK*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetGrounderIK*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetGrounderIK*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGROUNDERIK_NAGHOCOCLDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
