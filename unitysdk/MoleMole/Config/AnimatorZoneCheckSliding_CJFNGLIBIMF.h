#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneCheckSliding; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163FB4A0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163FB4B0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_WRITE_OFFSET UNITYSDK_OFFSET(0x163FB860)
#define MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x163FBA90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCheckSliding_CJFNGLIBIMF_TypeDefinitionIndex = 52487;

	class AnimatorZoneCheckSliding_CJFNGLIBIMF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCheckSliding*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCheckSliding*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCheckSliding*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCheckSliding*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHECKSLIDING_CJFNGLIBIMF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
