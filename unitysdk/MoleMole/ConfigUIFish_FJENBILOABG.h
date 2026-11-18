#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIFish; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUIFISH_FJENBILOABG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180CA770)
#define MOLEMOLE_CONFIGUIFISH_FJENBILOABG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180CA780)
#define MOLEMOLE_CONFIGUIFISH_FJENBILOABG_WRITE_OFFSET UNITYSDK_OFFSET(0x180CA910)
#define MOLEMOLE_CONFIGUIFISH_FJENBILOABG__CTOR_OFFSET UNITYSDK_OFFSET(0x180CAA30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFish_FJENBILOABG_TypeDefinitionIndex = 70556;

	class ConfigUIFish_FJENBILOABG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_FJENBILOABG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_FJENBILOABG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIFish*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_FJENBILOABG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUIFish*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_FJENBILOABG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
