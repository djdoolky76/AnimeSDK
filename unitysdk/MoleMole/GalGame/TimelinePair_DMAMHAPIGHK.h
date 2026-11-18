#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TimelinePair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1191C7B0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1191C7C0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_WRITE_OFFSET UNITYSDK_OFFSET(0x1191C890)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1191C940)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TimelinePair_DMAMHAPIGHK_TypeDefinitionIndex = 68695;

	class TimelinePair_DMAMHAPIGHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TimelinePair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TimelinePair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TimelinePair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TimelinePair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_DMAMHAPIGHK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
