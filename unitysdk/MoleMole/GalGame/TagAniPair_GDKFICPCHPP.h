#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagAniPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DC610)
#define MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DC620)
#define MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_WRITE_OFFSET UNITYSDK_OFFSET(0x130DC7B0)
#define MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x130DC8D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagAniPair_GDKFICPCHPP_TypeDefinitionIndex = 70415;

	class TagAniPair_GDKFICPCHPP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagAniPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagAniPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TagAniPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagAniPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_GDKFICPCHPP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
