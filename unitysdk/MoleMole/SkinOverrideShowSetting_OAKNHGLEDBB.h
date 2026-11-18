#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkinOverrideShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C0BEC90)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C0BECA0)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_WRITE_OFFSET UNITYSDK_OFFSET(0x1C0BEE30)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BEF50)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSetting_OAKNHGLEDBB_TypeDefinitionIndex = 57727;

	class SkinOverrideShowSetting_OAKNHGLEDBB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_OAKNHGLEDBB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
