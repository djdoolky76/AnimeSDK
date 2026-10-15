#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcConst; }
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCCONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29F40)
#define RPG_GAMECORE_TRACKNPCCONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC29E60)

namespace RPG::GameCore
{
	class TrackNpcConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrackNpcVisionConfig*>* VisionConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCCONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcConst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcConst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCCONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
