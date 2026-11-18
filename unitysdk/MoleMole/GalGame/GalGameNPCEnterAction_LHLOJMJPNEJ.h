#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x104219F0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10421A00)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_WRITE_OFFSET UNITYSDK_OFFSET(0x104222C0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x104227C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCEnterAction_LHLOJMJPNEJ_TypeDefinitionIndex = 68354;

	class GalGameNPCEnterAction_LHLOJMJPNEJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCEnterAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_LHLOJMJPNEJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
