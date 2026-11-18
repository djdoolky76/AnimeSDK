#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAddBuddyMoveXZ; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121A4230)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121A4240)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_WRITE_OFFSET UNITYSDK_OFFSET(0x121A4690)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x121A4920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAddBuddyMoveXZ_PNMDDMBOMOG_TypeDefinitionIndex = 44832;

	class AnimatorZoneAddBuddyMoveXZ_PNMDDMBOMOG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_PNMDDMBOMOG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
