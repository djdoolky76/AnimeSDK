#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSwitchFadeDurationOverride; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1652A730)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1652A740)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_WRITE_OFFSET UNITYSDK_OFFSET(0x1652AD70)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1652B110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSwitchFadeDurationOverride_OHCGPANALGN_TypeDefinitionIndex = 49168;

	class AnimatorZoneSwitchFadeDurationOverride_OHCGPANALGN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSwitchFadeDurationOverride*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSwitchFadeDurationOverride*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSwitchFadeDurationOverride*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSwitchFadeDurationOverride*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHFADEDURATIONOVERRIDE_OHCGPANALGN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
