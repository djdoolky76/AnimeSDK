#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneLockTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16525450)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16525460)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_WRITE_OFFSET UNITYSDK_OFFSET(0x16526760)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16527290)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16527250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_JDDOJKEENOE_TypeDefinitionIndex = 88937;

	class AnimatorZoneLockTarget_JDDOJKEENOE
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_JDDOJKEENOE_TypeDefinitionIndex)->GetStaticField(0x3E900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_JDDOJKEENOE_TypeDefinitionIndex)->GetStaticField(0x3E908);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_JDDOJKEENOE_TypeDefinitionIndex)->GetStaticField(0x3E910);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_JDDOJKEENOE_TypeDefinitionIndex)->GetStaticField(0x3E918);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneLockTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneLockTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_JDDOJKEENOE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
