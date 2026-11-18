#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class BladeIllusionNPCGroupDataSo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1219F400)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1219F410)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_WRITE_OFFSET UNITYSDK_OFFSET(0x1219F660)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1219F7E0)

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCGroupDataSo_IMAIHHFCDKF_TypeDefinitionIndex = 90092;

	class BladeIllusionNPCGroupDataSo_IMAIHHFCDKF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::BladeIllusionNPCGroupDataSo*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::BladeIllusionNPCGroupDataSo*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_IMAIHHFCDKF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
