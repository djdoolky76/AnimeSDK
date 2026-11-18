#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoActivityBGSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x135B2990)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x135B29A0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_WRITE_OFFSET UNITYSDK_OFFSET(0x135B2B30)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN__CTOR_OFFSET UNITYSDK_OFFSET(0x135B2C50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_DPKPLFJFMLN_TypeDefinitionIndex = 90116;

	class MonoActivityBGSetting_DPKPLFJFMLN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityBGSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoActivityBGSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DPKPLFJFMLN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
