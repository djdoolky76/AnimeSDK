#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyFresnelModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFF3290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFF32A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_WRITE_OFFSET UNITYSDK_OFFSET(0xFFF4130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF4980)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyFresnelModifier_FLAOCGJMJIA_TypeDefinitionIndex = 53424;

	class ConfigMaterialPropertyFresnelModifier_FLAOCGJMJIA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyFresnelModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyFresnelModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyFresnelModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_FLAOCGJMJIA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
