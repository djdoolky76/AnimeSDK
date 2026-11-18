#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteColliderDither; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B87F90)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B87FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_WRITE_OFFSET UNITYSDK_OFFSET(0x18B88350)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B88580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteColliderDither_OEIFPLFIMFJ_TypeDefinitionIndex = 57215;

	class AnimatorZoneMuteColliderDither_OEIFPLFIMFJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteColliderDither*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteColliderDither*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteColliderDither*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteColliderDither*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECOLLIDERDITHER_OEIFPLFIMFJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
