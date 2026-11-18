#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DC910)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DC920)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_WRITE_OFFSET UNITYSDK_OFFSET(0x130DCAB0)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DCBD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupBoolPair_KILNMLNFLBE_TypeDefinitionIndex = 88030;

	class TagGroupBoolPair_KILNMLNFLBE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagGroupBoolPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagGroupBoolPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TagGroupBoolPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagGroupBoolPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_KILNMLNFLBE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
