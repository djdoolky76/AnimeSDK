#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneOverrideCameraDitherKey; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B0CB90)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B0CBA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_WRITE_OFFSET UNITYSDK_OFFSET(0x19B0CFF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0D280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideCameraDitherKey_AKGOLNJOINA_TypeDefinitionIndex = 78290;

	class AnimatorZoneOverrideCameraDitherKey_AKGOLNJOINA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneOverrideCameraDitherKey*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideCameraDitherKey*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneOverrideCameraDitherKey*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideCameraDitherKey*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_AKGOLNJOINA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
