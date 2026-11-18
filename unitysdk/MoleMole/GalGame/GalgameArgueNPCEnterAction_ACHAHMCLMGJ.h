#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalgameArgueNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EB650)
#define MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EB660)
#define MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_WRITE_OFFSET UNITYSDK_OFFSET(0x180EBF20)
#define MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x180EC420)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameArgueNPCEnterAction_ACHAHMCLMGJ_TypeDefinitionIndex = 91955;

	class GalgameArgueNPCEnterAction_ACHAHMCLMGJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalgameArgueNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalgameArgueNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalgameArgueNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameArgueNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEARGUENPCENTERACTION_ACHAHMCLMGJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
