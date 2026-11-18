#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B4C470)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B4C480)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_WRITE_OFFSET UNITYSDK_OFFSET(0x12B4C550)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4C600)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowRenderSequenceConfig_MDGGEMFGIHO_TypeDefinitionIndex = 63362;

	class HollowRenderSequenceConfig_MDGGEMFGIHO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowRenderSequenceConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowRenderSequenceConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_MDGGEMFGIHO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
