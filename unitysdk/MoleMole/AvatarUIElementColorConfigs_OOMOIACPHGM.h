#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12756070)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12756080)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_WRITE_OFFSET UNITYSDK_OFFSET(0x12756150)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x12756200)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColorConfigs_OOMOIACPHGM_TypeDefinitionIndex = 75563;

	class AvatarUIElementColorConfigs_OOMOIACPHGM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColorConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColorConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_OOMOIACPHGM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
