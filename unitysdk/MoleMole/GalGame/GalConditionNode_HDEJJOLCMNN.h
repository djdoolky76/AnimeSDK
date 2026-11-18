#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalConditionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE0F60)
#define MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE0F70)
#define MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE1320)
#define MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1550)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalConditionNode_HDEJJOLCMNN_TypeDefinitionIndex = 47636;

	class GalConditionNode_HDEJJOLCMNN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalConditionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalConditionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalConditionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalConditionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONDITIONNODE_HDEJJOLCMNN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
