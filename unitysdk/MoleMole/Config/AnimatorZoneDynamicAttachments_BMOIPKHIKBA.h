#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneDynamicAttachments; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127674E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127674F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_WRITE_OFFSET UNITYSDK_OFFSET(0x12767D10)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA__CTOR_OFFSET UNITYSDK_OFFSET(0x127681B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDynamicAttachments_BMOIPKHIKBA_TypeDefinitionIndex = 56617;

	class AnimatorZoneDynamicAttachments_BMOIPKHIKBA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDynamicAttachments*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDynamicAttachments*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDynamicAttachments*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDynamicAttachments*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_BMOIPKHIKBA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
