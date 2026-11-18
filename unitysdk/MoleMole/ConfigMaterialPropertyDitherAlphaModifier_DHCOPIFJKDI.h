#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyDitherAlphaModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6F7D30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F7D40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6F8C90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F9560)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDitherAlphaModifier_DHCOPIFJKDI_TypeDefinitionIndex = 79485;

	class ConfigMaterialPropertyDitherAlphaModifier_DHCOPIFJKDI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDitherAlphaModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DHCOPIFJKDI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
