#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectSelfAttachPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B5AA40)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B5AA50)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_WRITE_OFFSET UNITYSDK_OFFSET(0x12B5AB20)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5ABD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSelfAttachPoint_KLHLGJDFJIF_TypeDefinitionIndex = 65404;

	class MonoEffectSelfAttachPoint_KLHLGJDFJIF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectSelfAttachPoint*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectSelfAttachPoint*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_KLHLGJDFJIF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
