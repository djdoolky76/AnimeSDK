#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D203D0)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D203E0)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_WRITE_OFFSET UNITYSDK_OFFSET(0x10D20790)
#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10D209C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchPoseData_HNKPLFNOKBJ_TypeDefinitionIndex = 63462;

	class GalSwitchPoseData_HNKPLFNOKBJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchPoseData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchPoseData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchPoseData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA_HNKPLFNOKBJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
