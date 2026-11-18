#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Utils { class NapCameraSequence; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12C1C7E0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12C1C7F0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_WRITE_OFFSET UNITYSDK_OFFSET(0x12C1C990)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1CAB0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequence_AHHFKHBPGHG_TypeDefinitionIndex = 72344;

	class NapCameraSequence_AHHFKHBPGHG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Utils::NapCameraSequence*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Utils::NapCameraSequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Utils::NapCameraSequence*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::NapCameraSequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_AHHFKHBPGHG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
