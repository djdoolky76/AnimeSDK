#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneBlock; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E74160)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E74170)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_WRITE_OFFSET UNITYSDK_OFFSET(0x11E74520)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11E74750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBlock_BNCPIHMDGDD_TypeDefinitionIndex = 85790;

	class AnimatorZoneBlock_BNCPIHMDGDD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneBlock*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBlock*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneBlock*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBlock*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLOCK_BNCPIHMDGDD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
