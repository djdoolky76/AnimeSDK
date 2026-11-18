#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1432A1D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1432A1E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_WRITE_OFFSET UNITYSDK_OFFSET(0x1432A2B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1432A360)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int NpcTextureBehaviorSection_CDMAFOPKMKH_TypeDefinitionIndex = 55361;

	class NpcTextureBehaviorSection_CDMAFOPKMKH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CDMAFOPKMKH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
