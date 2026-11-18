#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginProgramConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B59EF0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B59F00)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_WRITE_OFFSET UNITYSDK_OFFSET(0x12B59FD0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5A080)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginProgramConfig_HBGINFBKDEG_TypeDefinitionIndex = 62687;

	class MonoEffectPluginProgramConfig_HBGINFBKDEG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginProgramConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginProgramConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginProgramConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginProgramConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_HBGINFBKDEG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
