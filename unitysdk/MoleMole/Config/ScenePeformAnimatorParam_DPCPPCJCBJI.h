#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B93B8C0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B93B8D0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_WRITE_OFFSET UNITYSDK_OFFSET(0x1B93BC80)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93BEB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePeformAnimatorParam_DPCPPCJCBJI_TypeDefinitionIndex = 83481;

	class ScenePeformAnimatorParam_DPCPPCJCBJI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePeformAnimatorParam*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ScenePeformAnimatorParam*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_DPCPPCJCBJI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
