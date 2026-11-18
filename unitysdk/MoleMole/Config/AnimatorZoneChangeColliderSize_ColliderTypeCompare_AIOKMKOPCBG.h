#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderTypeCompare.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B09500)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B09510)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_WRITE_OFFSET UNITYSDK_OFFSET(0x19B09520)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B09530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderTypeCompare_AIOKMKOPCBG_TypeDefinitionIndex = 81620;

	class AnimatorZoneChangeColliderSize_ColliderTypeCompare_AIOKMKOPCBG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_AIOKMKOPCBG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
