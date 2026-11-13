#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C9E80)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D3C9910)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__NOTIFYUNLOCKIFROUNDDONE_OFFSET UNITYSDK_OFFSET(0x1D3C9C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GrantUnlockSummarizer_TypeDefinitionIndex = 66861;

	class GridFightTeam_GrantUnlockSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _NotifyUnlockIfRoundDone(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__NOTIFYUNLOCKIFROUNDDONE_OFFSET))(this, a1, a2, a3);
		}

	};
}
