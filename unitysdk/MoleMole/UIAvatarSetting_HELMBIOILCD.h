#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAvatarSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A331060)
#define MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A331070)
#define MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_WRITE_OFFSET UNITYSDK_OFFSET(0x1A3313A0)
#define MOLEMOLE_UIAVATARSETTING_HELMBIOILCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3315A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSetting_HELMBIOILCD_TypeDefinitionIndex = 61043;

	class UIAvatarSetting_HELMBIOILCD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_HELMBIOILCD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAvatarSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSETTING_HELMBIOILCD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
