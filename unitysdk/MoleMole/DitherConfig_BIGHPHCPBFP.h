#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class DitherConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118F7CE0)
#define MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118F7CF0)
#define MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_WRITE_OFFSET UNITYSDK_OFFSET(0x118F85B0)
#define MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP__CTOR_OFFSET UNITYSDK_OFFSET(0x118F8AB0)

namespace MoleMole
{
	inline static constexpr unsigned int DitherConfig_BIGHPHCPBFP_TypeDefinitionIndex = 59144;

	class DitherConfig_BIGHPHCPBFP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::DitherConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::DitherConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::DitherConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG_BIGHPHCPBFP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
