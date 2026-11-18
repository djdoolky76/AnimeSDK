#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class AttractorConfigAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11F90E00)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11F90E10)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_WRITE_OFFSET UNITYSDK_OFFSET(0x11F91120)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F91300)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConfigAssetSO_LPLMGAIEJFB_TypeDefinitionIndex = 87604;

	class AttractorConfigAssetSO_LPLMGAIEJFB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::AttractorConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NPCCrowd::AI::AttractorConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_LPLMGAIEJFB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
