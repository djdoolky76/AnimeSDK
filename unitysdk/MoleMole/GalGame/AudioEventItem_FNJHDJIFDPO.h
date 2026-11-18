#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D1E7A0)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D1E7B0)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_WRITE_OFFSET UNITYSDK_OFFSET(0x10D1EAC0)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1ECA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int AudioEventItem_FNJHDJIFDPO_TypeDefinitionIndex = 82061;

	class AudioEventItem_FNJHDJIFDPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::AudioEventItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::AudioEventItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::AudioEventItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::AudioEventItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_FNJHDJIFDPO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
