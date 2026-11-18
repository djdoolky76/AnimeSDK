#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlaySubStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AE9630)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AE9640)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_WRITE_OFFSET UNITYSDK_OFFSET(0x14AE9FA0)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEA4F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlaySubStoryNode_AHEAGIKCIPA_TypeDefinitionIndex = 44393;

	class GalPlaySubStoryNode_AHEAGIKCIPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlaySubStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlaySubStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlaySubStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlaySubStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_AHEAGIKCIPA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
