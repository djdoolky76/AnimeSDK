#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162CAC10)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162CAC20)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_WRITE_OFFSET UNITYSDK_OFFSET(0x162CADB0)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD__CTOR_OFFSET UNITYSDK_OFFSET(0x162CAED0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagBoolPair_INNKCONLFPD_TypeDefinitionIndex = 48355;

	class TagBoolPair_INNKCONLFPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagBoolPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagBoolPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TagBoolPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagBoolPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_INNKCONLFPD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
