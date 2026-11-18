#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneRotateBone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1922C7B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1922C7C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_WRITE_OFFSET UNITYSDK_OFFSET(0x1922D770)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1922E100)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1922E0C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_IIIIEALECFF_TypeDefinitionIndex = 70332;

	class AnimatorZoneRotateBone_IIIIEALECFF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_IIIIEALECFF_TypeDefinitionIndex)->GetStaticField(0x3BD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneRotateBone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneRotateBone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IIIIEALECFF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
