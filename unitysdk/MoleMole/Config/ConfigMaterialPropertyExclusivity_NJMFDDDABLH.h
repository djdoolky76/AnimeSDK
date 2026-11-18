#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19241E60)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19241E70)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_WRITE_OFFSET UNITYSDK_OFFSET(0x19242000)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x19242190)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH__CTOR_OFFSET UNITYSDK_OFFSET(0x19242150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyExclusivity_NJMFDDDABLH_TypeDefinitionIndex = 88528;

	class ConfigMaterialPropertyExclusivity_NJMFDDDABLH
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyExclusivity_NJMFDDDABLH_TypeDefinitionIndex)->GetStaticField(0x3BDC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_NJMFDDDABLH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
