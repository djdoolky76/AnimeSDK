#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetResistStaggerLevel; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E81580)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E81590)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_WRITE_OFFSET UNITYSDK_OFFSET(0x11E819E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH__CTOR_OFFSET UNITYSDK_OFFSET(0x11E81C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetResistStaggerLevel_MEJONOLJNOH_TypeDefinitionIndex = 45220;

	class AnimatorZoneSetResistStaggerLevel_MEJONOLJNOH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetResistStaggerLevel*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetResistStaggerLevel*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetResistStaggerLevel*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetResistStaggerLevel*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRESISTSTAGGERLEVEL_MEJONOLJNOH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
