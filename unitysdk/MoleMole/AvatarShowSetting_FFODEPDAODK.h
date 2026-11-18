#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1218B4C0)
#define MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1218B4D0)
#define MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_WRITE_OFFSET UNITYSDK_OFFSET(0x1218BB10)
#define MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK__CTOR_OFFSET UNITYSDK_OFFSET(0x1218BEA0)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting_FFODEPDAODK_TypeDefinitionIndex = 87946;

	class AvatarShowSetting_FFODEPDAODK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AvatarShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_FFODEPDAODK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
