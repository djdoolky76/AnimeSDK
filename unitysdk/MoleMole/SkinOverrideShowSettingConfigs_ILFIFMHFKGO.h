#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18963630)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18963640)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_WRITE_OFFSET UNITYSDK_OFFSET(0x18963710)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x189637C0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSettingConfigs_ILFIFMHFKGO_TypeDefinitionIndex = 64715;

	class SkinOverrideShowSettingConfigs_ILFIFMHFKGO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSettingConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSettingConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_ILFIFMHFKGO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
