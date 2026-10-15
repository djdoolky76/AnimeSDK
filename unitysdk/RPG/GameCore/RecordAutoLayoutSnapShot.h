#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordAutoLayoutSnapShot; }
namespace System { class String; }

#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D973930)
#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D973940)
#define RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordAutoLayoutSnapShot_TypeDefinitionIndex = 23126;

	class RecordAutoLayoutSnapShot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordAutoLayoutSnapShot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordAutoLayoutSnapShot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDAUTOLAYOUTSNAPSHOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
