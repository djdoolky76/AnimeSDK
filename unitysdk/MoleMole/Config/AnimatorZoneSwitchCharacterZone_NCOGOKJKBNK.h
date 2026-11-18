#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSwitchCharacterZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16400420)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16400430)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_WRITE_OFFSET UNITYSDK_OFFSET(0x16400CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK__CTOR_OFFSET UNITYSDK_OFFSET(0x164011F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSwitchCharacterZone_NCOGOKJKBNK_TypeDefinitionIndex = 69147;

	class AnimatorZoneSwitchCharacterZone_NCOGOKJKBNK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSwitchCharacterZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSwitchCharacterZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSwitchCharacterZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSwitchCharacterZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_NCOGOKJKBNK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
