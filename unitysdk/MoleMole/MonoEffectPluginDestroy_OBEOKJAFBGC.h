#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginDestroy; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12474140)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12474150)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_WRITE_OFFSET UNITYSDK_OFFSET(0x12474160)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x12474170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDestroy_OBEOKJAFBGC_TypeDefinitionIndex = 38345;

	class MonoEffectPluginDestroy_OBEOKJAFBGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginDestroy*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginDestroy*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginDestroy*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginDestroy*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_OBEOKJAFBGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
