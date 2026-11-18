#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneHitColliderEnable; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E76C50)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E76C60)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_WRITE_OFFSET UNITYSDK_OFFSET(0x11E77150)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO__CTOR_OFFSET UNITYSDK_OFFSET(0x11E77430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitColliderEnable_IJAGIAFAJNO_TypeDefinitionIndex = 86091;

	class AnimatorZoneHitColliderEnable_IJAGIAFAJNO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneHitColliderEnable*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHitColliderEnable*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneHitColliderEnable*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHitColliderEnable*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITCOLLIDERENABLE_IJAGIAFAJNO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
