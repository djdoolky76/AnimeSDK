#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D21640)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D21650)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_WRITE_OFFSET UNITYSDK_OFFSET(0x10D21A00)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D21C30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionDisplayItem_CGNCMPLNNMG_TypeDefinitionIndex = 39157;

	class MainCityChatTransitionDisplayItem_CGNCMPLNNMG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatTransitionDisplayItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatTransitionDisplayItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CGNCMPLNNMG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
