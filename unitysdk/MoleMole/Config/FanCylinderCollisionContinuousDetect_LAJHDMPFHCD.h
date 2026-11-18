#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class FanCylinderCollisionContinuousDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92FD90)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92FEC0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_READ_OFFSET UNITYSDK_OFFSET(0x1B92FDA0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_WRITE_OFFSET UNITYSDK_OFFSET(0x1B931D40)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B932FA0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B932F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCylinderCollisionContinuousDetect_LAJHDMPFHCD_TypeDefinitionIndex = 71549;

	class FanCylinderCollisionContinuousDetect_LAJHDMPFHCD
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_LAJHDMPFHCD_TypeDefinitionIndex)->GetStaticField(0x4D7A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_LAJHDMPFHCD_TypeDefinitionIndex)->GetStaticField(0x4D7A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_LAJHDMPFHCD_TypeDefinitionIndex)->GetStaticField(0x4D7B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_LAJHDMPFHCD_TypeDefinitionIndex)->GetStaticField(0x4D7B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_READ_OFFSET))(this, EGEGIMGMJHN, FAJNJHEJMEA);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_LAJHDMPFHCD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
