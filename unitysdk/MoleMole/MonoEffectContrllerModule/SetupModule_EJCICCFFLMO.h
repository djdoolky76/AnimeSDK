#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180FA730)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180FA740)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_WRITE_OFFSET UNITYSDK_OFFSET(0x180FA750)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO__CTOR_OFFSET UNITYSDK_OFFSET(0x180FA760)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int SetupModule_EJCICCFFLMO_TypeDefinitionIndex = 48920;

	class SetupModule_EJCICCFFLMO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectContrllerModule::SetupModule& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::SetupModule&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectContrllerModule::SetupModule& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::SetupModule&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_EJCICCFFLMO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
