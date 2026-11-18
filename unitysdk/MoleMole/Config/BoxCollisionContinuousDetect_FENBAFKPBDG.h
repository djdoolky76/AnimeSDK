#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class BoxCollisionContinuousDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5FA00)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5FB30)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_READ_OFFSET UNITYSDK_OFFSET(0x11A5FA10)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_WRITE_OFFSET UNITYSDK_OFFSET(0x11A61710)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A62800)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A627C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionContinuousDetect_FENBAFKPBDG_TypeDefinitionIndex = 47416;

	class BoxCollisionContinuousDetect_FENBAFKPBDG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_FENBAFKPBDG_TypeDefinitionIndex)->GetStaticField(0x4D760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_FENBAFKPBDG_TypeDefinitionIndex)->GetStaticField(0x4D768);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_FENBAFKPBDG_TypeDefinitionIndex)->GetStaticField(0x4D770);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_FENBAFKPBDG_TypeDefinitionIndex)->GetStaticField(0x4D778);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::BoxCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_READ_OFFSET))(this, EGEGIMGMJHN, FAJNJHEJMEA);
		}

		::System::Boolean ReadMember(::MoleMole::Config::BoxCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::BoxCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_FENBAFKPBDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
