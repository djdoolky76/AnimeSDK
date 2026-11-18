#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneCharacterRotSpeed; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131CF7E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131CF7F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_WRITE_OFFSET UNITYSDK_OFFSET(0x131CFED0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN__CTOR_OFFSET UNITYSDK_OFFSET(0x131D02C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterRotSpeed_DOJBABBGNLN_TypeDefinitionIndex = 93044;

	class AnimatorZoneCharacterRotSpeed_DOJBABBGNLN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCharacterRotSpeed*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterRotSpeed*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCharacterRotSpeed*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterRotSpeed*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_DOJBABBGNLN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
