#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_DamageText; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4552A0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4552B0)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B455A50)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B455F20)
#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B455EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_BDPKDJFDJBM_TypeDefinitionIndex = 65933;

	class ConfigUICommon_DamageText_BDPKDJFDJBM
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_DamageText_BDPKDJFDJBM_TypeDefinitionIndex)->GetStaticField(0x486F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_DamageText*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_DamageText*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_DamageText*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_BDPKDJFDJBM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
