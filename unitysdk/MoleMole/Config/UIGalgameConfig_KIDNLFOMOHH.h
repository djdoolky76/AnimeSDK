#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class UIGalgameConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16546550)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16546560)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_WRITE_OFFSET UNITYSDK_OFFSET(0x165467E0)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH__CTOR_OFFSET UNITYSDK_OFFSET(0x16546990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIGalgameConfig_KIDNLFOMOHH_TypeDefinitionIndex = 80154;

	class UIGalgameConfig_KIDNLFOMOHH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::UIGalgameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UIGalgameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::UIGalgameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIGalgameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_KIDNLFOMOHH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
