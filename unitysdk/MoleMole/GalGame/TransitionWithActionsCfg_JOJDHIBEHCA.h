#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TransitionWithActionsCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162CAF10)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162CAF20)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_WRITE_OFFSET UNITYSDK_OFFSET(0x162CCDC0)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x162CDF20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionWithActionsCfg_JOJDHIBEHCA_TypeDefinitionIndex = 79013;

	class TransitionWithActionsCfg_JOJDHIBEHCA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionWithActionsCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionWithActionsCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_JOJDHIBEHCA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
