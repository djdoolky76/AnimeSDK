#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A362B0)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A362C0)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_WRITE_OFFSET UNITYSDK_OFFSET(0x11A36460)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A36590)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColor_NHJMBJEAMOA_TypeDefinitionIndex = 69578;

	class AvatarUIElementColor_NHJMBJEAMOA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColor*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColor*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_NHJMBJEAMOA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
