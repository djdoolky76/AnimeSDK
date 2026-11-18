#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneLockPosYByGround; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19090130)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19090140)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_WRITE_OFFSET UNITYSDK_OFFSET(0x190904F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD__CTOR_OFFSET UNITYSDK_OFFSET(0x19090720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockPosYByGround_CFAMKDBBCLD_TypeDefinitionIndex = 58993;

	class AnimatorZoneLockPosYByGround_CFAMKDBBCLD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneLockPosYByGround*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockPosYByGround*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneLockPosYByGround*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockPosYByGround*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKPOSYBYGROUND_CFAMKDBBCLD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
