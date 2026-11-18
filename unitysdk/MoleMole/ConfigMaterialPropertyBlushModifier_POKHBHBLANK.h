#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyBlushModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6F66A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F66B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6F74C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F7CF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyBlushModifier_POKHBHBLANK_TypeDefinitionIndex = 80012;

	class ConfigMaterialPropertyBlushModifier_POKHBHBLANK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyBlushModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyBlushModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyBlushModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyBlushModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_POKHBHBLANK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
