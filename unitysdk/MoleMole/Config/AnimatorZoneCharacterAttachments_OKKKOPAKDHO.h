#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneCharacterAttachments; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174ECA50)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174ECA60)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_WRITE_OFFSET UNITYSDK_OFFSET(0x174ECF50)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x174ED230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterAttachments_OKKKOPAKDHO_TypeDefinitionIndex = 40268;

	class AnimatorZoneCharacterAttachments_OKKKOPAKDHO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCharacterAttachments*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterAttachments*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCharacterAttachments*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterAttachments*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERATTACHMENTS_OKKKOPAKDHO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
