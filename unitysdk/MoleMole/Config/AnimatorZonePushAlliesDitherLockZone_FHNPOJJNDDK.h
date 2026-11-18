#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZonePushAlliesDitherLockZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19091A30)
#define MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19091A40)
#define MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_WRITE_OFFSET UNITYSDK_OFFSET(0x19091E90)
#define MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x19092120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZonePushAlliesDitherLockZone_FHNPOJJNDDK_TypeDefinitionIndex = 42943;

	class AnimatorZonePushAlliesDitherLockZone_FHNPOJJNDDK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZonePushAlliesDitherLockZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZonePushAlliesDitherLockZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZonePushAlliesDitherLockZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZonePushAlliesDitherLockZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPUSHALLIESDITHERLOCKZONE_FHNPOJJNDDK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
