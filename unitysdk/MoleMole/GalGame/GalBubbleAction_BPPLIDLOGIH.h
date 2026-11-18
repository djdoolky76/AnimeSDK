#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139E4660)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139E4670)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_WRITE_OFFSET UNITYSDK_OFFSET(0x139E4800)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH__CTOR_OFFSET UNITYSDK_OFFSET(0x139E4920)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleAction_BPPLIDLOGIH_TypeDefinitionIndex = 80898;

	class GalBubbleAction_BPPLIDLOGIH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_BPPLIDLOGIH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
