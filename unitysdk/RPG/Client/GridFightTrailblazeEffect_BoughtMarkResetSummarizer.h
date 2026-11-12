#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AINFNFIDGFF;
namespace RPG::Client { class GridFightTrailblazeEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BOUGHTMARKRESETSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB7E80)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BOUGHTMARKRESETSUMMARIZER_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0xDCBAE70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeEffect_BoughtMarkResetSummarizer_TypeDefinitionIndex = 67274;

	class GridFightTrailblazeEffect_BoughtMarkResetSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTrailblazeEffect* _Effect; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightTrailblazeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BOUGHTMARKRESETSUMMARIZER_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateStage(::AINFNFIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINFNFIDGFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BOUGHTMARKRESETSUMMARIZER_UPDATESTAGE_OFFSET))(this, a1);
		}

	};
}
