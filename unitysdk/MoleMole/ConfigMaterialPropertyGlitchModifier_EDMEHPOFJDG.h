#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyGlitchModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192BE6B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192BE6C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_WRITE_OFFSET UNITYSDK_OFFSET(0x192BF710)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG__CTOR_OFFSET UNITYSDK_OFFSET(0x192C00B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGlitchModifier_EDMEHPOFJDG_TypeDefinitionIndex = 91251;

	class ConfigMaterialPropertyGlitchModifier_EDMEHPOFJDG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyGlitchModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyGlitchModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyGlitchModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_EDMEHPOFJDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
