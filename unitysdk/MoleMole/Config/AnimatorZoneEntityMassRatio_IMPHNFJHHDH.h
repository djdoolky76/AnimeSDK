#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneEntityMassRatio; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B85710)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B85720)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_WRITE_OFFSET UNITYSDK_OFFSET(0x18B85B70)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B85E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneEntityMassRatio_IMPHNFJHHDH_TypeDefinitionIndex = 40302;

	class AnimatorZoneEntityMassRatio_IMPHNFJHHDH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneEntityMassRatio*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityMassRatio*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneEntityMassRatio*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityMassRatio*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMASSRATIO_IMPHNFJHHDH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
