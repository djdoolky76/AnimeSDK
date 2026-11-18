#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class PathStateAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13783910)
#define NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13783920)
#define NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_WRITE_OFFSET UNITYSDK_OFFSET(0x13783C30)
#define NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x13783E00)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathStateAssetSO_JGELCLBJDPM_TypeDefinitionIndex = 39903;

	class PathStateAssetSO_JGELCLBJDPM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::PathStateAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NPCCrowd::AI::PathStateAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_JGELCLBJDPM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
