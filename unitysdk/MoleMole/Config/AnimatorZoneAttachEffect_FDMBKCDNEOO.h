#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAttachEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12764C80)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12764C90)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_WRITE_OFFSET UNITYSDK_OFFSET(0x12765180)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO__CTOR_OFFSET UNITYSDK_OFFSET(0x12765460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAttachEffect_FDMBKCDNEOO_TypeDefinitionIndex = 89763;

	class AnimatorZoneAttachEffect_FDMBKCDNEOO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAttachEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAttachEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAttachEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAttachEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_FDMBKCDNEOO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
