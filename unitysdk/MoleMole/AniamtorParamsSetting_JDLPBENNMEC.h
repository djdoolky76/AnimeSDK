#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E52D00)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E52D10)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_WRITE_OFFSET UNITYSDK_OFFSET(0x11E53020)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11E531F0)

namespace MoleMole
{
	inline static constexpr unsigned int AniamtorParamsSetting_JDLPBENNMEC_TypeDefinitionIndex = 83757;

	class AniamtorParamsSetting_JDLPBENNMEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AniamtorParamsSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AniamtorParamsSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AniamtorParamsSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AniamtorParamsSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_JDLPBENNMEC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
