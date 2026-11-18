#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneControlSliding; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174ED5A0)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174ED5B0)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_WRITE_OFFSET UNITYSDK_OFFSET(0x174ED960)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x174EDB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneControlSliding_MKFDNHEPKNG_TypeDefinitionIndex = 87253;

	class AnimatorZoneControlSliding_MKFDNHEPKNG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneControlSliding*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneControlSliding*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneControlSliding*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneControlSliding*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_MKFDNHEPKNG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
