#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyIgnisFatuusMaskModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8BD760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8BD770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8BE420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BEB60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyIgnisFatuusMaskModifier_IGFNADIKPML_TypeDefinitionIndex = 50033;

	class ConfigMaterialPropertyIgnisFatuusMaskModifier_IGFNADIKPML
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyIgnisFatuusMaskModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYIGNISFATUUSMASKMODIFIER_IGFNADIKPML_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
