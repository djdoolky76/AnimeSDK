#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BAF6F0)
#define MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BAF700)
#define MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_WRITE_OFFSET UNITYSDK_OFFSET(0x19BB0400)
#define MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB0BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_NLIIKCGILKM_TypeDefinitionIndex = 89570;

	class UIAvatarLightSetting_NLIIKCGILKM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAvatarLightSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_NLIIKCGILKM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
