#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15A26210)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15A26220)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_WRITE_OFFSET UNITYSDK_OFFSET(0x15A263B0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK__CTOR_OFFSET UNITYSDK_OFFSET(0x15A264D0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int SummerEventMonsterSpawnConfig_DGBKPFGCPAK_TypeDefinitionIndex = 89919;

	class SummerEventMonsterSpawnConfig_DGBKPFGCPAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_SUMMEREVENTMONSTERSPAWNCONFIG_DGBKPFGCPAK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
