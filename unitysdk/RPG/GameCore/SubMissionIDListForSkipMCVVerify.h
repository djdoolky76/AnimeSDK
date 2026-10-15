#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubMissionIDListForSkipMCVVerify; }

#define RPG_GAMECORE_SUBMISSIONIDLISTFORSKIPMCVVERIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB30E80)
#define RPG_GAMECORE_SUBMISSIONIDLISTFORSKIPMCVVERIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB30DC0)

namespace RPG::GameCore
{
	class SubMissionIDListForSkipMCVVerify : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SubMissionIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONIDLISTFORSKIPMCVVERIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubMissionIDListForSkipMCVVerify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubMissionIDListForSkipMCVVerify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONIDLISTFORSKIPMCVVERIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
