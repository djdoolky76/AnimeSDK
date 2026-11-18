#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D23AD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D23AE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_WRITE_OFFSET UNITYSDK_OFFSET(0x10D23C70)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D23D90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderSequence_BMFNOKLKIPE_TypeDefinitionIndex = 67167;

	class HollowEntityRenderSequence_BMFNOKLKIPE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_BMFNOKLKIPE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
