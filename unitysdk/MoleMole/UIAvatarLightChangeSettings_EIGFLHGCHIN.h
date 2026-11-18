#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14C09530)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14C09540)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_WRITE_OFFSET UNITYSDK_OFFSET(0x14C09760)
#define MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C098B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightChangeSettings_EIGFLHGCHIN_TypeDefinitionIndex = 42397;

	class UIAvatarLightChangeSettings_EIGFLHGCHIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightChangeSettings& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAvatarLightChangeSettings& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightChangeSettings&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTCHANGESETTINGS_EIGFLHGCHIN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
