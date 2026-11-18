#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityAttractorUseNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B42C00)
#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B42C10)
#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_WRITE_OFFSET UNITYSDK_OFFSET(0x12B42F20)
#define MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B43100)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityAttractorUseNode_HPCJBEBCHGC_TypeDefinitionIndex = 55535;

	class MainCityAttractorUseNode_HPCJBEBCHGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityAttractorUseNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityAttractorUseNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityAttractorUseNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityAttractorUseNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYATTRACTORUSENODE_HPCJBEBCHGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
