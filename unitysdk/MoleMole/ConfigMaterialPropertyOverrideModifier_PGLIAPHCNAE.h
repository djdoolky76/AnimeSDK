#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyOverrideModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118EDA40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118EDA50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_WRITE_OFFSET UNITYSDK_OFFSET(0x118EE7A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE__CTOR_OFFSET UNITYSDK_OFFSET(0x118EEF50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideModifier_PGLIAPHCNAE_TypeDefinitionIndex = 50699;

	class ConfigMaterialPropertyOverrideModifier_PGLIAPHCNAE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyOverrideModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyOverrideModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyOverrideModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PGLIAPHCNAE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
