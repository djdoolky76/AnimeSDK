#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12464FB0)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12464FC0)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_WRITE_OFFSET UNITYSDK_OFFSET(0x124652F0)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC__CTOR_OFFSET UNITYSDK_OFFSET(0x124654F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SetGroupMemberTransformCfg_ALOGIPOEHEC_TypeDefinitionIndex = 72670;

	class SetGroupMemberTransformCfg_ALOGIPOEHEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SetGroupMemberTransformCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::SetGroupMemberTransformCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_ALOGIPOEHEC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
