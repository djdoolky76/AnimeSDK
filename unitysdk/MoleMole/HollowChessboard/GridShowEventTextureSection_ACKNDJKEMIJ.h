#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class GridShowEventTextureSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DDDA0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DDDB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_WRITE_OFFSET UNITYSDK_OFFSET(0x130DDDC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x130DDDD0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GridShowEventTextureSection_ACKNDJKEMIJ_TypeDefinitionIndex = 61016;

	class GridShowEventTextureSection_ACKNDJKEMIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::GridShowEventTextureSection*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::GridShowEventTextureSection*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_ACKNDJKEMIJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
