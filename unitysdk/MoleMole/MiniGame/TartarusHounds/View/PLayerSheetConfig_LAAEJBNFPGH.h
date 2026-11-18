#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class PLayerSheetConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139EFCB0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139EFCC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_WRITE_OFFSET UNITYSDK_OFFSET(0x139EFE50)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH__CTOR_OFFSET UNITYSDK_OFFSET(0x139EFF70)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int PLayerSheetConfig_LAAEJBNFPGH_TypeDefinitionIndex = 67776;

	class PLayerSheetConfig_LAAEJBNFPGH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG_LAAEJBNFPGH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
