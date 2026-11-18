#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagStringPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1466CCB0)
#define MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1466CCC0)
#define MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_WRITE_OFFSET UNITYSDK_OFFSET(0x1466CE50)
#define MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1466CF70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagStringPair_GOCCNDMCFGE_TypeDefinitionIndex = 50753;

	class TagStringPair_GOCCNDMCFGE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagStringPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagStringPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TagStringPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagStringPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGSTRINGPAIR_GOCCNDMCFGE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
