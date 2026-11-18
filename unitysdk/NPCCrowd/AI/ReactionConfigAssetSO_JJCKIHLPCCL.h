#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class ReactionConfigAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE77FB20)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE77FB30)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_WRITE_OFFSET UNITYSDK_OFFSET(0xE77FCC0)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL__CTOR_OFFSET UNITYSDK_OFFSET(0xE77FDE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfigAssetSO_JJCKIHLPCCL_TypeDefinitionIndex = 67971;

	class ReactionConfigAssetSO_JJCKIHLPCCL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::ReactionConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NPCCrowd::AI::ReactionConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_JJCKIHLPCCL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
