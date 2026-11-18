#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AE9210)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AE9220)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_WRITE_OFFSET UNITYSDK_OFFSET(0x14AE93B0)
#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE94D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueStoryNodeConfig_HEKIGPLDDNL_TypeDefinitionIndex = 41478;

	class ArgueStoryNodeConfig_HEKIGPLDDNL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueStoryNodeConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueStoryNodeConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueStoryNodeConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueStoryNodeConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG_HEKIGPLDDNL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
