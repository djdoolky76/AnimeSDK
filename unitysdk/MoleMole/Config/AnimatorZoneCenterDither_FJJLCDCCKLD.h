#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneCenterDither; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19228840)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19228850)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_WRITE_OFFSET UNITYSDK_OFFSET(0x19228E80)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD__CTOR_OFFSET UNITYSDK_OFFSET(0x19229210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCenterDither_FJJLCDCCKLD_TypeDefinitionIndex = 90590;

	class AnimatorZoneCenterDither_FJJLCDCCKLD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCenterDither*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCenterDither*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCenterDither*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCenterDither*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_FJJLCDCCKLD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
