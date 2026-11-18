#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyDiffuseModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1654B8D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1654B8E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_WRITE_OFFSET UNITYSDK_OFFSET(0x1654C6E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1654CEF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDiffuseModifier_CCIBMKCLOEH_TypeDefinitionIndex = 65058;

	class ConfigMaterialPropertyDiffuseModifier_CCIBMKCLOEH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyDiffuseModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDiffuseModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyDiffuseModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDiffuseModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CCIBMKCLOEH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
