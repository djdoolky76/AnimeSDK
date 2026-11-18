#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D20A00)
#define MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D20A10)
#define MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_WRITE_OFFSET UNITYSDK_OFFSET(0x10D20AE0)
#define MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D20B90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchPoseRelatedParam_JMBKCPBNJFG_TypeDefinitionIndex = 49836;

	class GalSwitchPoseRelatedParam_JMBKCPBNJFG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchPoseRelatedParam*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseRelatedParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchPoseRelatedParam*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseRelatedParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM_JMBKCPBNJFG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
