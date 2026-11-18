#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B41FA0)
#define MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B41FB0)
#define MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_WRITE_OFFSET UNITYSDK_OFFSET(0x12B42200)
#define MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM__CTOR_OFFSET UNITYSDK_OFFSET(0x12B42380)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int BranchItem_GCKNPJPNEDM_TypeDefinitionIndex = 41137;

	class BranchItem_GCKNPJPNEDM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::BranchItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::BranchItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::BranchItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::BranchItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_GCKNPJPNEDM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
