#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneOverrideAmLegIkParams; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19090D20)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19090D30)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_WRITE_OFFSET UNITYSDK_OFFSET(0x19091550)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x190919F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideAmLegIkParams_MKEJPGNGHGI_TypeDefinitionIndex = 78044;

	class AnimatorZoneOverrideAmLegIkParams_MKEJPGNGHGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneOverrideAmLegIkParams*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideAmLegIkParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneOverrideAmLegIkParams*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideAmLegIkParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_MKEJPGNGHGI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
