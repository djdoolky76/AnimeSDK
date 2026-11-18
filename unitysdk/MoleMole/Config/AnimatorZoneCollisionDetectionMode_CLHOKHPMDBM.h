#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneCollisionDetectionMode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16520110)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16520120)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_WRITE_OFFSET UNITYSDK_OFFSET(0x16520610)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM__CTOR_OFFSET UNITYSDK_OFFSET(0x165208F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCollisionDetectionMode_CLHOKHPMDBM_TypeDefinitionIndex = 82124;

	class AnimatorZoneCollisionDetectionMode_CLHOKHPMDBM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCollisionDetectionMode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCollisionDetectionMode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCollisionDetectionMode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCollisionDetectionMode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_CLHOKHPMDBM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
