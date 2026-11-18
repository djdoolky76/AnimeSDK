#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneFaceMainCityAvatar; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E75DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E75E00)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_WRITE_OFFSET UNITYSDK_OFFSET(0x11E76250)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x11E764E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFaceMainCityAvatar_NBBGMPEDLKD_TypeDefinitionIndex = 42786;

	class AnimatorZoneFaceMainCityAvatar_NBBGMPEDLKD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFaceMainCityAvatar*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFaceMainCityAvatar*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFaceMainCityAvatar*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFaceMainCityAvatar*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_NBBGMPEDLKD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
