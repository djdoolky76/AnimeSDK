#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalScript; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16245C20)
#define MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16245C30)
#define MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_WRITE_OFFSET UNITYSDK_OFFSET(0x16245DC0)
#define MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x16245EE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalScript_ELGFKKPIFLO_TypeDefinitionIndex = 61786;

	class GalScript_ELGFKKPIFLO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalScript*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalScript*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalScript*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalScript*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_ELGFKKPIFLO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
