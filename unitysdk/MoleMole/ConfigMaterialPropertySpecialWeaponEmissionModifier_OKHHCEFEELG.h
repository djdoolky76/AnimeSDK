#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertySpecialWeaponEmissionModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A056730)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A056740)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A057920)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0583B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySpecialWeaponEmissionModifier_OKHHCEFEELG_TypeDefinitionIndex = 92354;

	class ConfigMaterialPropertySpecialWeaponEmissionModifier_OKHHCEFEELG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySpecialWeaponEmissionModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_OKHHCEFEELG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
