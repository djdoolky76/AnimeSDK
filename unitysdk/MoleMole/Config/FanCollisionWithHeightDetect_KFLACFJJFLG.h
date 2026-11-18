#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class FanCollisionWithHeightDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11EA3980)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11EA3990)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_WRITE_OFFSET UNITYSDK_OFFSET(0x1B44A5D0)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B44B250)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44B210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex = 63583;

	class FanCollisionWithHeightDetect_KFLACFJJFLG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex)->GetStaticField(0x486A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_PBENMLJEEMM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex)->GetStaticField(0x486A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex)->GetStaticField(0x486B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex)->GetStaticField(0x486B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_KFLACFJJFLG_TypeDefinitionIndex)->GetStaticField(0x486C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCollisionWithHeightDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::FanCollisionWithHeightDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_KFLACFJJFLG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
