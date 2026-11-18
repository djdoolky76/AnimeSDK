#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoGameSceneObjectMap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B5DDC0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B5DDD0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_WRITE_OFFSET UNITYSDK_OFFSET(0x12B5DF60)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5E080)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGameSceneObjectMap_BIGIEGPKNLO_TypeDefinitionIndex = 86147;

	class MonoGameSceneObjectMap_BIGIEGPKNLO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoGameSceneObjectMap*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoGameSceneObjectMap*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_BIGIEGPKNLO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
