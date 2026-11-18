#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitEffectMapItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA46170)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA46180)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA46490)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA46660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitEffectMapItem_DLAGBOAHHPA_TypeDefinitionIndex = 48334;

	class HitEffectMapItem_DLAGBOAHHPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitEffectMapItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::HitEffectMapItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_DLAGBOAHHPA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
