#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertySecondaryAlbedoModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x142C9210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x142C9220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_WRITE_OFFSET UNITYSDK_OFFSET(0x142CA840)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL__CTOR_OFFSET UNITYSDK_OFFSET(0x142CB560)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryAlbedoModifier_IFDNPKBBBHL_TypeDefinitionIndex = 77213;

	class ConfigMaterialPropertySecondaryAlbedoModifier_IFDNPKBBBHL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertySecondaryAlbedoModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_IFDNPKBBBHL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
