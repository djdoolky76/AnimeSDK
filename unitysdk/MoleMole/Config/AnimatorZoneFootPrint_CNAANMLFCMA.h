#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneFootPrint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x165221D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x165221E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_WRITE_OFFSET UNITYSDK_OFFSET(0x165226D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16522A20)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x165229E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_CNAANMLFCMA_TypeDefinitionIndex = 84506;

	class AnimatorZoneFootPrint_CNAANMLFCMA
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_CNAANMLFCMA_TypeDefinitionIndex)->GetStaticField(0x3E8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_CNAANMLFCMA_TypeDefinitionIndex)->GetStaticField(0x3E8F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CNAANMLFCMA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
