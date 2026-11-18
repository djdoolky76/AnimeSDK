#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneModifyFriction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFC7E50)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFC7E60)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_WRITE_OFFSET UNITYSDK_OFFSET(0xFFC85E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFC8A90)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC8A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneModifyFriction_JIOBFANMCBO_TypeDefinitionIndex = 75044;

	class AnimatorZoneModifyFriction_JIOBFANMCBO
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_JIOBFANMCBO_TypeDefinitionIndex)->GetStaticField(0x4E880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneModifyFriction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneModifyFriction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneModifyFriction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneModifyFriction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_JIOBFANMCBO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
