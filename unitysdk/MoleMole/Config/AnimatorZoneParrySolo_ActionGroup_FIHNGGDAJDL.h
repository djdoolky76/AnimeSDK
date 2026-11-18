#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneParrySolo_ActionGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAAE7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAAE7B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_WRITE_OFFSET UNITYSDK_OFFSET(0xFAAEAC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAAED00)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL__CTOR_OFFSET UNITYSDK_OFFSET(0xFAAECC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_ActionGroup_FIHNGGDAJDL_TypeDefinitionIndex = 54534;

	class AnimatorZoneParrySolo_ActionGroup_FIHNGGDAJDL
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_FIHNGGDAJDL_TypeDefinitionIndex)->GetStaticField(0x51670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_FIHNGGDAJDL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
