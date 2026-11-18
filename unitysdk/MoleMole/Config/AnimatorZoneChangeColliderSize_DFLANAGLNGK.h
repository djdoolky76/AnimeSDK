#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneChangeColliderSize; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131CE500)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131CE510)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_WRITE_OFFSET UNITYSDK_OFFSET(0x131CF070)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x131CF760)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK__CTOR_OFFSET UNITYSDK_OFFSET(0x131CF720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_DFLANAGLNGK_TypeDefinitionIndex = 81618;

	class AnimatorZoneChangeColliderSize_DFLANAGLNGK
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_DFLANAGLNGK_TypeDefinitionIndex)->GetStaticField(0x4C060);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_DFLANAGLNGK_TypeDefinitionIndex)->GetStaticField(0x4C068);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneChangeColliderSize*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneChangeColliderSize*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_DFLANAGLNGK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
