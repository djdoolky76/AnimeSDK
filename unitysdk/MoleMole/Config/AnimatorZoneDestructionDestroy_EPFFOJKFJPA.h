#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneDestructionDestroy; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174EDBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174EDBE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_WRITE_OFFSET UNITYSDK_OFFSET(0x174EE0D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA__CCTOR_OFFSET UNITYSDK_OFFSET(0x174EE420)
#define MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x174EE3E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDestructionDestroy_EPFFOJKFJPA_TypeDefinitionIndex = 39065;

	class AnimatorZoneDestructionDestroy_EPFFOJKFJPA
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDestructionDestroy_EPFFOJKFJPA_TypeDefinitionIndex)->GetStaticField(0x4AA10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDestructionDestroy*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDestructionDestroy*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDestructionDestroy*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDestructionDestroy*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDESTRUCTIONDESTROY_EPFFOJKFJPA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
