#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define GLJBBGBINBN_CLEAR_OFFSET UNITYSDK_OFFSET(0x15AB9C30)
#define GLJBBGBINBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB9EF0)
#define GLJBBGBINBN_EGBHEPJHELB_OFFSET UNITYSDK_OFFSET(0x15AB9C80)
#define GLJBBGBINBN_FOMNFMGCKBO_OFFSET UNITYSDK_OFFSET(0x15AB9D00)
#define GLJBBGBINBN_GET_KEY_OFFSET UNITYSDK_OFFSET(0x15AB9C10)
#define GLJBBGBINBN_PBNJDHFCHHC_OFFSET UNITYSDK_OFFSET(0x15AB9DC0)
#define GLJBBGBINBN_SET_KEY_OFFSET UNITYSDK_OFFSET(0x15AB9C20)

	class GLJBBGBINBN : public ::System::Object
	{
	public:
		::RPG::GameCore::TargetEvaluator* GDNEBEPBHOP; // 0x10
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
		::System::String* _Key_k__BackingField; // 0x20
		::RPG::GameCore::ActionDelayChangeTypeMask IICLNAGKNPP; // 0x28
		// static const ::System::String* CNGIBBBEADC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJBBGBINBN_CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJBBGBINBN_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GLJBBGBINBN_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJBBGBINBN_CLEAR_OFFSET))(this);
		}

		::System::Void EGBHEPJHELB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GLJBBGBINBN_EGBHEPJHELB_OFFSET))(this, a1);
		}

		::System::Boolean FOMNFMGCKBO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GLJBBGBINBN_FOMNFMGCKBO_OFFSET))(this, a1);
		}

		::System::Boolean PBNJDHFCHHC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ActionDelayChangeTypeMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask))((::PBYTE)hIl2Cpp + GLJBBGBINBN_PBNJDHFCHHC_OFFSET))(this, a1, a2);
		}

	};
