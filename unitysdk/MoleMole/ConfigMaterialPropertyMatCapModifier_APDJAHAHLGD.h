#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyMatCapModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A772F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A772FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_WRITE_OFFSET UNITYSDK_OFFSET(0x1A775510)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A776B90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_APDJAHAHLGD_TypeDefinitionIndex = 82560;

	class ConfigMaterialPropertyMatCapModifier_APDJAHAHLGD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyMatCapModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMatCapModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyMatCapModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyMatCapModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_APDJAHAHLGD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
