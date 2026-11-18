#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1191CAC0)
#define MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1191CAD0)
#define MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_WRITE_OFFSET UNITYSDK_OFFSET(0x1191CB90)
#define MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1191CC40)

namespace MoleMole
{
	inline static constexpr unsigned int GameplayTag_FENHMKBBGAG_TypeDefinitionIndex = 82653;

	class GameplayTag_FENHMKBBGAG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GameplayTag& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GameplayTag& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_FENHMKBBGAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
