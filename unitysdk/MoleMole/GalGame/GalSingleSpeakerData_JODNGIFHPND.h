#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSingleSpeakerData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12463060)
#define MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12463070)
#define MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_WRITE_OFFSET UNITYSDK_OFFSET(0x12463200)
#define MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND__CTOR_OFFSET UNITYSDK_OFFSET(0x12463320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSingleSpeakerData_JODNGIFHPND_TypeDefinitionIndex = 81763;

	class GalSingleSpeakerData_JODNGIFHPND
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSingleSpeakerData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSingleSpeakerData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSingleSpeakerData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSingleSpeakerData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSINGLESPEAKERDATA_JODNGIFHPND_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
