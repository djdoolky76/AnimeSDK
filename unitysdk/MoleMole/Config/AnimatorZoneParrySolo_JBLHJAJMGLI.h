#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneParrySolo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16529F70)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16529F80)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_WRITE_OFFSET UNITYSDK_OFFSET(0x1652A3D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1652A6C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1652A680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_JBLHJAJMGLI_TypeDefinitionIndex = 54531;

	class AnimatorZoneParrySolo_JBLHJAJMGLI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_JBLHJAJMGLI_TypeDefinitionIndex)->GetStaticField(0x3E930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneParrySolo*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneParrySolo*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_JBLHJAJMGLI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
