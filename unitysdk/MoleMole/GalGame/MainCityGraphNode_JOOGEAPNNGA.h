#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityGraphNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1191C140)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1191C150)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_WRITE_OFFSET UNITYSDK_OFFSET(0x1191C460)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1191C640)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityGraphNode_JOOGEAPNNGA_TypeDefinitionIndex = 52788;

	class MainCityGraphNode_JOOGEAPNNGA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityGraphNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityGraphNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityGraphNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityGraphNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_JOOGEAPNNGA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
